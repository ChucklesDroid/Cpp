#include <iostream>
/* Video Referrence for Raw string literals:- https://www.youtube.com/watch?v=DiZ-az_nJMM */

class Entity{
    int example[5] ;
    public :
        Entity(){
            for( int i = 0; i < 5; i++ ){
                example[i] = 2 ;
            }
        }
};

int main( int argc, char *argv[] )
{
    Entity e;
    int unsigned_int = u'U'; 
    int hex_dec = 0x2a ;
    std::cout<<"unsigned_int : "<<unsigned_int<<std::endl<<"Hexadecimal : "<<hex_dec<<std::endl ;
    return 0 ;
}
