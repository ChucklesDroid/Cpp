#include <iostream>
#include <array>
#include <string>

int main( int argc, char *argv[] )
{
	std::string path=R"(~/Documents/GITHUB/C-/C++ online course)";
/* Normal String would have to be written as "~//Documents//GITHUB//C-//C++\ online\ course" instead of what we usually write hence its termed as "raw" string literals */ 
/* Raw string Literals can also be used for multi line string literals */
	std::cout<<path<<std::endl; 
/* A raw string literal using \t and \n */
	std::cout<<R"(C:\temp\newFile.txt)"<<std::endl;
/* A raw string including " */
	std::cout<<R"(a raw string including ")"<<std::endl;
/* A raw string literal including "(" */
	std::cout<<R"(a raw string literal including "(")"<<std::endl;

	return 0;
}
