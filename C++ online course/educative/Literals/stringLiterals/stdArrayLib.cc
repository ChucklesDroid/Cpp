/* This program makes use of stl libraries */
#include <iostream>

/* To bipass the whole having to maintain count of members of array we can instead make
 * use of std::array */

#include <array>
std::array<int,5> globalArray;

//std::cout<<globalArray.size_t;
int main( int argc, char *argv[] )
{
std::cout<<globalArray[2]<<std::endl ;
std::cout<<globalArray.size()<<std::endl;
	return 0 ;
}
