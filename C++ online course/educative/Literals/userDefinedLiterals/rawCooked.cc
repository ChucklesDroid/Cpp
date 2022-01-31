/* Raw and cooked literals */
/* Data_Type            Syntax      Example     Argument           Literal_Operator
 * integer(Raw)     integer_suffix   11_s      char const*        operator"" _s("11")
 * integer(Cooked)  integer_suffix   11_s  unsigned long long int operator"" _s(11)
 * 
 **** similar case with floating point variables as well
 Compiler can map numbers to both integer( unsigned long long int ) or float ( long double ) but can also map it to C strings(char const*) 
 * If we implement both versions then the compiler will choose the cooked form due to higher priority
 */
#include <iostream>

/* Clarifies Difference between cooked and raw literals */
constexpr char const* operator"" _i(char const* str){return str ;}
unsigned long long int operator"" _i(unsigned long long int num){
    std::cout<<"cooked"<<std::endl;
    return num;
}

int main( int argc, char *argv[] )
{
    unsigned long long int tst_subj = 11_i ;
    std::cout<<tst_subj<<std::endl;
    return 0;
}
