// 	Pseudo Code to demonstrate namespace behaviour
// 	Source :- https://docs.microsoft.com/en-us/cpp/cpp/namespaces-cpp?view=msvc-160
/* 	Namespace 	*/
namespace ContosoData
{
	class ObjectManager
	{
	public :
		void doSomething() ;
	}
	void Func(ObjectManager) {} 
}

//	To use namespace members without directive or declarations
To call members :-
ContosoData::ObjectManager mgr ;
ContosoData::doSomething() ;
ContosoData::Func(mgr) ;

// 	To use declaration to bring one identifier into scope
using ContosoData::ObjectManager ;
ObjectManager mgr ;
mgr.doSomething() ;

/*	Declaring namespaces and namespace members  */

//	contosoData.h
namespace ContosoDataServer{
	void Foo() ;
	void Bar() ;
}

//	Function implementation in contosodata.cpp should use full qualified name , even if you place a using directive at the top of file

#include "contosoData.h"
using namespace ContosoDataServer ;

void ContosoDataServer::Foo()
{
	// no qualification needed for Bar()
	Bar() ;
}

int ContosoDataServer::Bar(){ return 0 ;}
// A namespace can be declared in multiple blocks in a single file and in multiple files. The compiler joins parts together during preprocessing and the resulting 
// namespace contains all the members declared in all the parts . An example of this is the std namespace which is declared in each of the header files in the standard
// library

/*	Global Namespace 	*/
// To explicitly qualify a global identifier, use the scope resolution operator with no name, as in ::SomeFunction(x);. This will differentiate the identifier from anything with the same name in any other namespace, and it will also help to make your code easier for others to understand.

/*	Std Namespace		*/
// All C++ standard library types and functions are declared in the std namespace or namespaces nested inside std .

/*	Nested Namespaces	*/
// An ordinary nested namespace has unqualified access to its parent's members, but the parent members do not have unqualified access to the nested namespace (unless it is declared as inline), as shown in the following example:
namespace ContosoDataServer
{
	void Foo() ;

	namespace Details
	{
		int CountImpl ;
		void Ban(){ return Foo() ;}
	}
	
	int Bar(){ ...} ;
	int Baz( int i ){ return Details::CountImpl ;}
}

// Ordinary nested namespaces can be used to encapsulate internal implementation details that are not part of the public interface of the parent namespace.

/*	Inline Namespace(C++ 11)	*/
//In contrast to an ordinary nested namespace, members of an inline namespace are treated as members of the parent namespace. This characteristic enables argument dependent lookup on overloaded functions to work on functions that have overloads in a parent and a nested inline namespace.

// Header.h
#include <strings>

namespace Test
{
	namespace old_ns
	{
		std::string Func() { return std::string("hello from old") ;}
	}
	inline namespace new_ns
	{
		std::string Func() { return std::string("Hello from new") ;}
	}
}

#include "header.h"
#include <string>
#include <iostream>

int main()
{
	using namespace Test ;
	using namespace std ;

	string s = Func() ;
	std :: cout << s << std :: endl ; // " Hello from new "
	return 0 ;
}

// NOTE :- Templates Section is omitted

/* 	Namespace aliases	*/
namespace a_very_long_namespace_name { class Foo{}:}
namespace AVLNN	= a_very_long_namespace_name ;
void Bar( AVLNN::Foo foo){} 


/* 	Unknown Namespaces or Anonymous namespace	*/
//it is useful when you want to make variable declarations invisible to code in other files (i.e. give them internal linkage) without having to create a named namespace. All code in the same file can see the identifiers in an unnamed namespace but the identifiers, along with the namespace itself, are not visible outside that file—or more precisely outside the translation unit.

//Eg:-
	namespace{
		int Myfunc() ;
	}
