#include <iostream>
#include <chrono>
#include <thread>

struct Timer{
        std::chrono::time_point<std::chrono::steady_clock> start,end ;
        std::chrono::duration<float> duration;
        Timer(){
            start = std::chrono::high_resolution_clock::now();
        }
        ~Timer(){
            end = std::chrono::high_resolution_clock::now() ;
            duration = end - start ;
            float ms = duration.count()*1000 ;

            std::cout<<"Timer took "<<ms<<"ms";

        }
};

void Function()
{
    Timer timer;
    for(int i = 0; i < 20; i++){
        std::cout<<"100"<<std::endl;
    }
}

int main( int argc, char *argv[] )
{
    Function();
    return 0;
}
