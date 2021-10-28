#include<iostream>
#include<string>

using std::cin ;
using std::cout ;
using std::string ;
using std::endl; 

int main( int argc ,char *argv[] )
{
	// Method 1 of declaring string 
	// string str ;
	// cin>> str ;
	// cout<< str << endl;

	// Method 2 of declaring string
	// string str1(5,'n') ; // Declares string of size 5 and all characters equal to n
	// cout<< str1 << endl;

	// Method 3 of declaring string
	// string str2 = "Greetings" ;
	// cout<< str2 << endl;
	
	// Method 4 of declaring string to parse newline characters as well by making use of getline function
	// string str3 ;
	// getline(cin,str3) ;
	// cout<< str3 <<endl ;
	
	// Method 5 :- Appending the string
	// string str4 = "fam" , str5 = "ily" ;
	// str4.append(str5) ; // Appends string str4 with str5 but str5 value does not change 
	// cout<< str4 ;
		// Method 5.1 :- Printing the string by appending the value( i,e changing the string)
	// string str4 = str4 + str5; 
	// cout<<str4 ;
		// Method 5.2 :- Printing the string without changing the value of either strings
	//cout<< str4+str5 ;

	// Method 6:- Accessing a particular character of the string
	string str6 = "fam" ;
	cout << str6[1] ; // Prints the second character of the string
	return 0 ;
}
