#include <iostream>
#include <chrono>

using namespace std::literals::chrono_literals ;

int main( int argc, char *argv[] )
{
    std::chrono::duration<long long, std::ratio<2700>> hour ;
    auto schoolHour = hour(1) ;
    auto shortBreak = 300s;
    auto longBreak = 0.25;
    auto schoolWay = 25min;
    auto homework = 2h;
    
    auto schoolDayinHours = (schoolHour*6) + (shortBreak*4) + (longBreak*1) + (schoolWay*2) + homework ;

    return 0 ;
}
