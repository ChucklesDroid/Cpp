#include <iostream>
#include <cstring>

int main( int argc, char *argv[] )
{
/* ptr can be initialised to NULL by using 0,nullptr or NULL */
    /* Stack allocated memory */
    int var = 8 ;
    int* ptr = &var ;
    *ptr = 10;

    /* Heap allocated memory */
    char* buffer = new char[8] ;
    memset(buffer,0,8) ; // initializes each member of array to 0
    delete[] buffer ;    // deallocates heap allocated memory

    

    //void* ptr = nullptr ;
    //same as above
    // ptr = 0 ; 
    // ptr = NULL ;
    // The above three lines equate pointer to 0 which means that
    // pointer is not valid and being not valid is a perfectly acceptable state.

    
    return 0 ;
}
