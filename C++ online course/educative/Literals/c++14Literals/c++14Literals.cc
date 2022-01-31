/* C++14 literal implementations */
#include <iostream>
#include <string>
/* The main difference b/w built in and user defined literals is built in literals dont have underscore */
//                  Prefix/Suffix       Example
// Binary numbers:     0b/0B(P)          0b10
// std::string          s/S(S)           "hell"s
// complex<long>
// .
// .
// .
// std:: ...

int main( int argc, char* argv[] )
{
    int bool_val = 0b100 ;
    using namespace std::string_literals ; // To make use of 's' prefix 
    std::string str = "Hello"s + " World!" ;
    std::cout<<bool_val<<std::endl;
    std::cout<<str<<std::endl;
    return 0 ;
}
