#include <iostream>
#include <string>

using std::cout ;
using std::cin ;
using std::string; 

int main( int argc , char *argv[] )
{
	string ch = "greeting" ;
	cout<<ch<<"\n" ;
	string cdh ;
	for( int i = 0 ; i < 5 ; i++ )
		cin>>cdh ;
	cout<<cdh ;
	return 0 ;
}
