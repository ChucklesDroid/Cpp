#include <iostream>
#include <iomanip>      // used for setw: which is a manipulator

using namespace std;
int main( int argc, char *argv[] )
{
/* Constants */
    const float a = 2 ;
/* Manipulators  */
    cout<<"Value of a without manipulator is"<<a<<endl ;
    cout<<"Value of a with manipulator    is"<<setw(2)<<a<<endl ;

/* Operator Precedence */
    cout<<45+43*2+2*2<<endl;
    return 0 ;
}