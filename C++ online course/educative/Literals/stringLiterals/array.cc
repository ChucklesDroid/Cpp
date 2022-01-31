#include <iostream>

class Entity{
/* Example of memory allocated on stack */
	public:
	 static const int exampleSize = 5 ; // By providing it as static constant we can makesure that it's value is compiled time constant
	 int example[exampleSize]; 
	 int count = sizeof(example) / sizeof(int) ; // used only with stack allocated arrays
		Entity(){
			for( int i = 0; i < 5; i++ ){
				example[i] = 2; 
			}
		}
		void initialise(int index){
			std::cout<<example[index]<<std::endl;
		}
};

class Entity2{
	public:
	int exampleSize = 5 ; 
	int *example = new int[exampleSize] ;
		Entity2(){
			for( int i = 0; i < 5; i++ ){
				example[i] = 0 ;
			}
		}
};

/* To bipass the whole having to maintain count of members of array we can instead make
 * use of std::array */
	#include <array>
	std::array<int,5> globalArray ;
int main( int argc, char *argv[] )
{
/* we can initialise as follows :-*/
	for( int i = 0; i < globalArray.size() ;i++ ){
			globalArray[i] = 2 ;
	}


	Entity e ;
	Entity2 e1; 
/* Initialising variables of global array */
	for( int i = 0; i < globalArray.size() ;i++ ){
			globalArray[i] = 2 ;
	}
	std::cout<<"size of int: "<<sizeof(int)<<std::endl;
	std::cout<<"size pf Entity e : "<<sizeof(e)<<std::endl;
	std::cout<<"size of Entity2 e1 : "<<sizeof(e1)<<std::endl;
	int exam[5] ;
	exam[2] = 2 ;
	exam[4] = 4 ;

/* Memory access violation */
//	exam[-1] = 2 ;
//	exam[5] = 4 ;
	
	std::cout<<exam[0]<<std::endl;
	std::cout<<exam[4]<<std::endl;

	int* ptr = exam ;
	*(ptr + 4) = 5 ;
	std::cout<<exam[4]<<std::endl;

	/* A similar way to achieve this can be to use char pointers */
	*(int*)((char*)ptr + 8) = 6;
	std::cout<<exam[2]<<std::endl;

	return 0 ;
}
