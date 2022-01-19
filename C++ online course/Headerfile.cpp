/* To view a header file -> Ctrl+LeftClick to open a header file */
/* There are 2 types of header files :-
    1. System Header FIles :- It ships with the compiler
    2. User defined Header Files :- It is written by the user
** To include standard files we make use of <"headerName">  Eg:- #include<iostream>
** To include user defined header files we make use of "headerName" Eg:- #include"usrlib.h"

Note:- To view complete exhaustive list :-https://en.cppreference.com/w/cpp/header
*/
#include <iostream>
using namespace std;

int main( int argc, char *argv[] )
{
    cout<<"This is Hello world program\n" ;
    int a=3 , b=4 ;
/* Arithmetic Operators */
    cout<<"Arithemtic Operators"<<endl;
    cout<<"The value of a+b: "<<a+b ;
    cout<<"\nThe value of a-b: "<<a-b ;
    cout<<"\nThe value of a*b: "<<a*b ;
    cout<<"\nThe value of a/b: "<<a/b ;
    cout<<"\nThe value of a++: "<<a++ ;
    cout<<"\nThe value of a--: "<<a-- ;
    cout<<"\nThe value of ++a: "<<++a<<endl ;
    cout<<endl; 
/* Assignment Operator */
    // int a=7,b=8 ;
    // char ch='d' ;

/* Comparision Operator */
    a=3 , b=4 ;
    cout<<"Comparision Operator"<<endl;
    cout<<"The value of a==b: "<<(a==b)<<endl;
    cout<<"The value of a!=b: "<<(a!=b)<<endl;
    cout<<"The value of a<=b: "<<(a<=b)<<endl;
    cout<<"The value of a>=b: "<<(a>=b)<<endl;
    cout<<"The value of a>b: "<<(a>b)<<endl;
    cout<<"The value of a<b: "<<(a<b)<<endl;
    cout<<endl ;


/* Logical Operator */
    cout<<"Logical Operator"<<endl;
    cout<<"The value of (a==b) and (a>b): "<<((a==b) && (a>b))<<endl;
    cout<<"The value of (a==b) or (a>b): "<<((a==b) || (a>b))<<endl;
    cout<<"The value of (a==b) or (a<b): "<<((a==b) || (a<b))<<endl;
    cout<<"The value of not(a==b): "<<!(a==b)<<endl;
    cout<<endl ;
    return 0;
}