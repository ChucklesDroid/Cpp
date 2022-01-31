#include <iostream> 

namespace Distance{
    class myDistance{
        private:
            double d;
        public:
/*member init list used to initialise constructors as its much effective
 * way of doing it */
            myDistance(double m) : d(m){} ;         
            // Operator overloading
            friend myDistance operator + (myDistance const &a, myDistance const &b){
                return myDistance(a.d+b.d); 
            }
            friend myDistance operator - (myDistance const &a, myDistance const &b){
                return myDistance(a.d-b.d);
            }            
            friend myDistance operator * (myDistance &a, myDistance &b){
                return myDistance(a.d*b.d);
            }
    };
/* Operator Literals defined in different namespace to ease readability and also prevent use of conflicting types */
    namespace unit{
        unsigned long long operator"" _km( unsigned long long dist ){
            return dist*1000 ;
        }
        unsigned long long operator"" _m( unsigned long long dist ){
            return dist ;
        }
        unsigned long long operator"" _dm( unsigned long long dist ){
            return dist/10 ;
        }
        unsigned long long operator"" _cm( unsigned long long dist ){
            return dist/100 ;
        }
    }
}


using namespace Distance::unit ;
int main( int argc, char *argv[] )
{
    std::cout<<1_km+32_m<<std::endl;
    std::cout<<23_m+210_dm<<std::endl;
    std::cout << std::endl;
    std::cout<<"1.0_km + 2.0_m + 3.0_m + 4.0_km: "<<1_km+2_m+3_m+4_km<<std::endl;
    return 0 ;
}
