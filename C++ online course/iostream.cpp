#include <iostream>

using namespace std;
int main( int argc, char* argv[] )
{
    int a, b; 
/* "<<" is called insertion operator */
    cout<<"Insert value of a :";
/* ">>" is called extraction operator */
    cin>>a; 
    cout<<"Insert value of b :";
    cin>>b; 
    cout<<"Value of a: "<<a<<"\nValue of b: "<<b<<endl ;
    cout<<"Sumo of two variables is "<<a+b ;
    return 0 ;
}