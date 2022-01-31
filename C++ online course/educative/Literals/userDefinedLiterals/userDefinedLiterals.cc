// Referrence :- https://www.geeksforgeeks.org/user-defined-literals-cpp/ 
/* Literals are of 4 types :-
   Int
   Float 
   Character
   String */


 /* User Defined Literals are used for easy readability and increase type safety
    Syntax:: returnType operator"" _b(unsigned long long int)  //Literal operator for user defined INTEGRAL literal
    Only Standard Library are allowed to define literals without the underscore
    constexpr is used to allow compile time costs instead of runtime costs therefore decreasing memory usage
    website :- https://www.youtube.com/watch?v=4fJBrditnJU
    Restrictions on input parameter types(7 in total) :-
    char const*,unsigned long long,long double,
    (char const*,std::size_t )
    (wchar_t const*,std::size_t)
    (char16_t const*,std::size_t)
    (char32_t const*,std::size_t) */

/* User defined Literals */
// They are always to declared outside the main
// By defining the functions as constexpr its calculated at compile time instead of runtime

#include <iostream>

    constexpr long double operator"" _km(long double x) { return 1000*x; }
    constexpr long double operator"" _m(long double x) { return x; }
    constexpr int operator"" _bool(char const* string, std::size_t length){
        int ret = 0;
        for( int i = 0; i < length ; i++ ){
            ret = ret << 1 ;
            if( string[i] == '1' )
                ret += 1 ;
        }
        return ret ;
    }
/* C++14 implementation :- 
 * differences :- (i) It does not require space b/w " and _usrdefliteral
 * (ii) literals can start from capital letters i.e return_type operator""_C(unsigned long long){...} //is allowed. Therefore we can use reserved keywords as suffix.*/
    constexpr int operator""_C(unsigned long long x){ return x*10; }




int main( int argc, char *argv[] )
{
    char const* name = "aakarsh";
    long double dist1 = 10.0_km;
    long double dist2 = 100.0_m;
    std::cout<<dist1+dist2<<std::endl;
    std::cout<<"101010"_bool<<std::endl;
    unsigned long long numeric=4_C ;
    std::cout<<numeric<<std::endl;
    return 0;
}
