#include <iostream>
#include <string>

using std::cout ;
using std::cin ;
using std::endl ;
using std::string ;

int main( int argc, char *argv[] )
{
	string s1 ;
	string s2 ;
	cin >> s1 >> s2 ;
	if( s1 == s2 ){
		cout << "They are of equal \n" ;
	} else {
		string::size_type maxLength = (s1.length() > s2.length() ? s2.length() : s1.length()) ;
		for( string::size_type index = 0; index < maxLength; index++ ){
			if( s1[index] > s2[index] ){
				cout << "s1 is larger than s2: " << s1[index] - s2[index] ;
				return 0 ;
			}	else if ( s1[index] < s2[index] ){
				cout << "s2 is larger than s1: " << s2[index] - s1[index] ;
				return 0 ;
			} else {
				continue ;
			}
		}
	}
	return 0 ;
}
