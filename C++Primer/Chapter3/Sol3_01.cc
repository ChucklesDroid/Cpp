#include <iostream>
#include <string>

using std::cout ;
using std::endl ;
using std::string ;

int main( int argc, char *argv[] )
{
	int result = 1 ;
	cout << "2 raised to the power of 10: " ;
	for( string::size_type index = 0; index < 10; index++ ){
		result *= 2 ;
	}
	cout << result << endl ;
	return 0 ;
}
