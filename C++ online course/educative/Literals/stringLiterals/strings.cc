#include <iostream>
#include <string>

void getName( std::string& s )
{
	std::cin>>s ;
}

int main( int argc, char *argv[] )
{
//	char* name = "aakarsh" ;
	//name[2] = 's'; // invalid
	char name2[8] = {'a','a','k','a','r','s','h','\0'} ;
	std::cout<<name2<<std::endl ;

	std::string name3 = std::string("cherno") + " says hello";
/*Alternatives :-
 * std::string name3 = "cherno" ;
 * name3 += " says hello" ;
 */ 
	std::string name4 ;
	getName(name4) ;
	std::cout<<"Name entered :"<<name4<<std::endl ;
/* It is important to cast cherno to string and then append it with pointer */
	std::cout<<name3<<std::endl ; // string header file is reqd for printing strings

/* We can pass string to a function as referrence as follows 
 * void func( string& name ); 
 */
	return 0;
}
