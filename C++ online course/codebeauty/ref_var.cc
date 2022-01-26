/* This program demonstrates the use of referrence variables by swapping two 
 * elements */
#include <iostream>

void swap( int &, int &) ;
int main( int argc, char *argv[] )
{
    int element1 =10, element2 = 20;
    std::cout<<"Value of element1 "<<element1<<std::endl ;
    std::cout<<"Value of element2 "<<element2<<std::endl ;
    swap(element1,element2) ;
    std::cout<<"Value of element1 "<<element1<<std::endl ;
    std::cout<<"Value of element2 "<<element2<<std::endl ;
    return 0 ;
}

void swap( int &num1, int &num2 )
{
    int temp = num1 ; 
    num1 = num2 ;
    num2 = temp ;
}
