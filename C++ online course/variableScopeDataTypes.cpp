#include <iostream>

using namespace std;
int glo=6 ;
void sum( int glo )
{
    cout<<glo ;
}
int main( int argc , char *argv[] )
{
    bool boolValue = true ;
    int glo = 78 ;
    glo = 23 ;
    cout<<"Value of boolean variable: "<<boolValue<<endl ;
/* Local variable passed by argument */
    sum( glo ) ;
/* Local Variable printed */
    cout<<endl<<glo ;
/* Global Variable printed */
    cout<<endl<<::glo<<endl ;
    // int a = 4 , b = 5 ;
    // float pi = 3.14 ;
    // char c = 'd'; 
    // cout<<"Value of a is "<<a<<"\nValue of b is "<<b<<endl ;
    // cout<<"Value of a is "<<a<<"\nValue of pi is "<<pi<<endl ;
    // cout<<"Value of c is "<<c<<endl;
    return 0 ;
}