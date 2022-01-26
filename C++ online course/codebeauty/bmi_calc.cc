/* This program calculates bmi and inputs value from the user */
#include <iostream>

int main( int argc, char *argv[] )
{
    // Inputing value from the user
    int usrWeight;
    float usrHeight, usrBMI;
    std::cout<<"Enter your weight(in kg) : ";
    std::cin>>usrWeight ;
    std::cout<<"Enter your Height(in m) : ";
    std::cin>>usrHeight ;

    // Displaying entered values
    //std::cout<<"Weight :"<<usrWeight<<std::endl<<"Height"<<usrHeight<<std::endl; 

    // Calculating BMI of the user
    usrBMI = usrWeight/(usrHeight*usrHeight) ;

    // Outputing Result to the user
    if( usrBMI<18.5 ){
       std::cout<<"You are underweight\n"<<"BMI :"<<usrBMI ;
    } else {
        if( usrBMI < 25 ){
            std::cout<<"You are fit\n"<<"BMI :"<<usrBMI ;
        } else {
            std::cout<<"You are overweight\n"<<"BMI :"<<usrBMI ;
        }
    }
    return 0 ;
}
