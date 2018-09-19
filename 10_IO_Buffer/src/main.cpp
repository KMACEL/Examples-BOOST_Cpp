//============================================================================
// Name        : 03_Create_End_Point
// Programer   : Mert AceL
// Version     : 1.0
// Copyright   : Boost.Asio C++ Network Programming Cookbook
// Description : Boost.Asio C++ Network Programming Cookbook
//============================================================================
#include <boost/asio.hpp>
#include <iostream>
using namespace boost;
int main()
{
	//===============================================================
	// Method 1
	//===============================================================
	std::string buf; // 'buf' is the raw buffer.
	buf = "Hello";
	// Step 1 and 2 in single line.
	// Step 3. Creating buffer representation that satisfies
	// ConstBufferSequence concept requirements.
	asio::const_buffers_1 output_buf(asio::buffer(buf));
	// Step 4. 'output_buf' is the representation of the
	// buffer 'buf' that can be used in Boost.Asio output
	// operations

	//===============================================================
	// Method 2
	//===============================================================

	// We expect to receive a block of data no more than 20 bytes
	// long.
	const size_t BUF_SIZE_BYTES = 20;
	// Step 1. Allocating the buffer.
	std::unique_ptr<char[]> buf2(new char[BUF_SIZE_BYTES]);
	// Step 2. Creating buffer representation that satisfies
	// MutableBufferSequence concept requirements.
	asio::mutable_buffers_1 input_buf = asio::buffer(static_cast<void *>(buf2.get()),
													 BUF_SIZE_BYTES);
	// Step 3. 'input_buf' is the representation of the buffer
	// 'buf' that can be used in Boost.Asio input operations.

	//===============================================================
	// Method 3
	//===============================================================

	// In order to use our std::string object with the send() method of the class that represents
	// a TCP socket, we can do something like this:
	std::string buf3; // 'buf' is the raw buffer.

	asio::const_buffer asio_buf(buf3.c_str(), buf3.length());
	std::vector<asio::const_buffer> buffers_sequence;
	buffers_sequence.push_back(asio_buf);
	
	return 0;
}