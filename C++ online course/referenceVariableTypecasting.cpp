#include<iostream>

using namespace std ;
//  int global = 10 ;
int main( int argc, char *argv[] )
{
/****************   Build in Data Types *******************/
    // int global = 12;
    // cout<<"value of local global variable is: "<<global<<endl;
    // cout<<"value of global global variable is: "<<::global<<endl;

/****************   float,double and literals  ***********/
    float d=32.23 ; /* By default d will contain double values to store it as float we will have to use 'f' or 'F' along with it */
    float f=432.5f ;
    long double e=324.333323 ; 
   /* Similarly if we have to store long
    double value in e we would have to include 'l'or 'L' at the end of the value */
    long double g=3245.23243l ; 
    cout<<"Size of d: "<<sizeof(d)<<endl<<"Size of f: "<<sizeof(f)<<endl ;
    cout<<"Size of e: "<<sizeof(e)<<endl<<"Size of g: "<<sizeof(g)<<endl ;
    cout<<endl ;

/*************** Reference Variables *********************/
/*  Example :-
    Aayush Tiwary ---> Happy ----> Gamerkaboom
    Aakarsh MJ ---> Akku ----> Ozzyfnatic
    Lenin Singh Rathore ---> Aakash ----> Akku ----> Baburao
    Use case scenario :- When passing a variable by reference we can make use of reference variables instead of pointers (one of the many use case scenarios)
*/
    int x=455 ;
    int &y = x ;    /* y is a reference variable but original variable is x */
    cout<<"Reference Variables\n" ;
    cout<<x<<endl<<y<<endl;

/************** Typecasting *****************************/
    float b = 345.3223f;
    cout<<"The value of b is "<<b<<endl; 
    cout<<"The typecasted value of b is "<<(int)b<<endl;//Both are
    cout<<"The typecasted value of b is "<<int(b)<<endl;// same

    int a= (int)b ; /* This a valid statement */

    return 0 ;
}