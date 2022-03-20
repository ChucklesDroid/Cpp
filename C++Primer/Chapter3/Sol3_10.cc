#include <iostream>
#include <string>
#include <cctype>

using std::cin ;
using std::cout ;
using std::string ;
using std::endl ;

int main( int argc, char *argv[] )
{
	string word ;
	// string::size_type index = 0 ;
	getline( cin, word ) ;
	// for( ; index < word.size(); index++ ){
		// if( word[index] != '!' ){
			// cout << word[index] ;
		// } else {
			// continue ;
		// }
	// } 
	
	// using range based for statements
	for ( auto c : word ){
		if( !ispunct(c) ){
			cout << c ;
		}
	}
	// cout.ignore( 1, EOF ) ;
	cout << endl ;
	return 0 ;
}
