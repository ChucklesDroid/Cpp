#include <iostream>

using std::cout ;
using std::cin ;
using std::endl ;
using std::string ;

int main( int argc, char *argv[] )
{
	string s1,
				 s2 ;
	cin >> s1 >> s2 ;
	string s3 = s1 + s2 ;
	cout << s3 << endl ;
	cout << s1 + " " + s2 ;
	return 0;
}
