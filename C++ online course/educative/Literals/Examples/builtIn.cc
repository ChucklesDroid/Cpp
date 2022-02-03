#include <iostream>
#include <chrono>

using namespace std::literals::chrono_literals ;

int main( int argc, char *argv[] )
{
    typedef std::chrono::duration<long long, std::ratio<2700>> hour ;
    auto schoolHour = hour{1} ;
    auto shortBreak = 300s;
    auto longBreak = 0.25h;
    auto schoolWay = 25min;
    auto homework = 2h;
    
    auto schoolDayinSecs = (schoolHour*6) + (shortBreak*4) + (longBreak*1) + (schoolWay*2) + homework ;
   std::chrono::duration<double, std::ratio<3600>> schoolDayinHrs = schoolDayinSecs;
   std::chrono::duration<double, std::ratio<60>> schoolDayinMins = schoolDayinSecs;
   std::chrono::duration<double, std::ratio<1,1000>> schoolDayinMilliSecs = schoolDayinSecs;

   std::cout<<"School Day in Hours :"<<schoolDayinHrs.count()<<"h"<<std::endl;
   std::cout<<"School Day in Mins :"<<schoolDayinMins.count()<<"mins"<<std::endl;
   std::cout<<"School Day in Secs :"<<schoolDayinSecs.count()<<"s"<<std::endl;
   std::cout<<"School Day in Milli Secs :"<<schoolDayinMilliSecs.count()<<"ms"<<std::endl;
    return 0 ;
}
