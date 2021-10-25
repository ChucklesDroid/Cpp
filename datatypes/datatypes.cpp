#include <iostream>
#include<cstdio>

// scanf and printf are lot faster than cin and cout when million of lines are to parsed !!!
// %c for character type , %d for integer type , %ld for long integer type , %f for float , %lf for double 

int main()
{
	char ch ; long li ;int i ; double d ; float f ;
	scanf("%d %ld %c %f %lf " , &i , &li , &ch , &f , &d ) ;
	printf("%d\n%ld\n%c\n%f\n%lf", i , li , ch , f , d ) ;
	return 0 ;
}
