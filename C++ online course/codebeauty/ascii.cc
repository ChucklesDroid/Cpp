#include <iostream>
/* This program takes input from the user and displays its ascii equivalent */
int main( int argc, char *argv[] )
{
    char strings[10] ;
    std::cout<<"Enter String(10characters): ";
    for(int loop=0 ; loop < 10 ; loop++ )
        std::cin>>strings[loop] ;
    for(int loop=0 ; loop < 10 ; loop++ )
        std::cout<<(int)strings[loop]<<" " ;
    return 0 ;
}
