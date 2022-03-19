#include <iostream>
#include <string>

using std::endl ;
using std::string ;
using std::cout ;
using std::cin ;

int main( int argc, char *argv[] )
{
	string line;
	while( getline(cin, line) ){
		cout << line << endl ;
	}
	return 0 ;
}
