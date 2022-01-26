/* This is a guessing game which compares hostId and guestId */
#include <iostream>

int main( int argc, char *argv[] )
{
    int hostId , guestId ;
/* Inputing Host usr Id */
    std::cout<<"Host : " ;
    std::cin>>hostId ;
    //Clear the screen
    system("clear") ;

/* Inputing Guest usr Id*/
    std::cout<<"Guest : ";
    std::cin>>guestId ;

/* Outputting the appropriate message */
    hostId == guestId ? std::cout<<"Access Granted" : std::cout<<"Access Denied !!" ;
    return 0 ;
}
