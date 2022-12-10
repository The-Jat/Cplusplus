#include <stdio.h>
#define a 10

int main(){

// We already defined a so this one is compiled.
	#ifdef a
   		printf("looks like a defined\n");
	#endif
 
// We have not defined b so this will not be compiled and ignored by the preprocessor.
	#ifndef b
		printf("looks like b is not defined\n");
	#endif

// We have not defined b so the else part will be compiled.
	#ifdef b
		printf("if b is defined. \n");
	#else
		printf("if b is not defined \n");
	#endif


   
   return 0;
}
