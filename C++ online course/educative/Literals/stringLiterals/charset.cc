#include <iostream>
#include <string>
#include <codecvt>
#include <locale>

/* String Literals are stored in read only memory */
/* Dynamically allocated strings are bit of an exception as on analyzing assembly code, a new variable is created into which value is copied from read only memory */

int main( int argc, char *argv[] )
{
/* C++ 14 standard used */
	using namespace std::string_literals ; // used in C++ 14 implementation
 	std::string name5 = "cherno"s + " says hello" ;
	std::wstring name6 = L"cherno"s + L" says hello";
	std::u16string name7 = u"cherno"s + u" says hello"; 
	std::u32string name8 = U"cherno"s + U" says hello";
	const char *name = "aakarsh" ; // conforms to UTF-8
	/*An alternative in C++14 standard: string name = u8"aakarsh" */
	std::cout<<"std::string"<<name5<<std::endl;
	std::wcout<<"std::wstring"<<name6<<std::endl;//wcout is used to print wide characters
//	std::cout<<"std::u16string"<<name7<<std::endl;
//	std::cout<<"std::u32string"<<name8<<std::endl;



/* ------- IMP ------- */
/* Printing UTF-32 characters to console */
	std::u32string str = U"很有用👍";  // btw. str.size() == 4
	std::wstring_convert<std::codecvt_utf8<char32_t>, char32_t> converter;
	std::cout << converter.to_bytes(str) << std::endl;



		/* Multi line strings */
		//C++ 11 definition
	const char* name9 = R"(Line1  
		Line2
		Line3)"; // 'R' here refers to raw as in "raw literals" 

		//Old implementation
	const char* name10 = "Line1\n"
	"Line2\n"
	"Line3\n" ;
	
	
/* ---- End of C++ 14 standard specific codes ---- */

	const wchar_t *name2 = L"aakarsh" ; // L signifies wide characters
	const char16_t *name3 = u"aakarsh"; // u signifies characrers conforms to UTF-16 
	const char32_t *name4 = U"aakarsh"; // U signifies characters conforms to UTF-32 
	std::cout<<"UTF-8 : "<<name<<std::endl;	
	std::cout<<"Wide characters : "<<name2<<std::endl;
	std::cout<<"UTF-16 : "<<name3<<std::endl;
	std::cout<<"UTF-32 : "<<name4<<std::endl;

	return 0 ;
}
