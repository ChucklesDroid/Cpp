#include <iostream>

int main( int argc, char *argv[] )
{
    int op1, op2 ;
    char optr ;
/* Inputing operands from the user */
    std::cout<<"****--------Calculator-----------****"<<std::endl;
    std::cout<<"Enter expression : ";
    std::cin>>op1>>optr>>op2 ;
    
/* choosing the operator */
    switch( (int)optr )
    {
        case '+':std::cout<<"\nSum:"<<(op1+op2);
                 break ;
        case '-':std::cout<<"\nDifference: "<<(op1-op2);
                 break ;
        case '*':std::cout<<"\nProduct: "<<(op1*op2);
                 break ;
        case '%':bool isop1Int,isop2Int ;
                 isop1Int = ((int)op1 == op1);
                 isop2Int = ((int)op2 == op2);
                 if( isop1Int && isop2Int ){
                     std::cout<<"\nRemainder: "<<(op1%op2) ;
                 } else {
                     std::cout<<"\nOperation not possible"; 
                 } break ;
        default: std::cout<<"calculator - usage : operators allowed '+','-','*','%'\nincorrect operator entered" ;
    }
    return 0 ;
}
