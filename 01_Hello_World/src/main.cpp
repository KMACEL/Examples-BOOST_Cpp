//============================================================================
// Name        : 1_Hello_Word
// Programer   : Mert AceL
// Version     : 1.0
// Copyright   : AceL
// Description : 22_Pointer
//============================================================================
#include <boost/lambda/lambda.hpp>
#include <iostream>
#include <iterator>
#include <algorithm>

int main()
{
    using namespace boost::lambda;
    typedef std::istream_iterator<int> in;

    std::for_each(
        in(std::cin), in(), std::cout << (_1 * 3) << " ");
}
