//============================================================================
// Name        : 03_Create_End_Point
// Programer   : Mert AceL
// Version     : 1.0
// Copyright   : AceL
// Description : Boost.Asio C++ Network Programming Cookbook
//============================================================================
#include <boost/asio.hpp>
#include <iostream>
using namespace boost;
int main()
{
	// Step 1. Assume that the client application has already
	// obtained the IP-address and the protocol port number.
	std::string raw_ip_address = "127.0.0.1";
	unsigned short port_num = 3333;
	// Used to store information about error that happens
	// while parsing the raw IP-address.
	boost::system::error_code ec;
	// Step 2. Using IP protocol version independent address
	// representation.
	asio::ip::address ip_address = asio::ip::address::from_string(raw_ip_address, ec);
	// ip v4 & v6
	// IP-protocol-version-agnostic
	// asio::ip::address_v4 : This represents an IPv4 address
	// asio::ip::address_v6 : This represents an IPv6 address
	// asio::ip::address : This IP-protocol-version-agnostic class can represent both IPv4 and IPv6 addresses
	
	if (ec.value() != 0)
	{
		// Provided IP address is invalid. Breaking execution.
		std::cout << "Failed to parse the IP address. Error code = " << ec.value() << ". Message: " << ec.message();
		return ec.value();
	}
	// Step 3.
	asio::ip::tcp::endpoint ep(ip_address, port_num);
	// Step 4. The endpoint is ready and can be used to specify a
	// particular server in the network the client wants to
	// communicate with.
	return 0;
}