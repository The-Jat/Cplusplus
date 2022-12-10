#include <stdio.h>
#include <iostream>
#define a 10
#define PI 3.14

using namespace std;

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
	
// Ifdef, elif, else
#define AGE 23
	#ifdef PI
		printf("PI value : %f\n", PI);
	#elif AGE
		printf("Age is %d\n", AGE);
	#else
		printf("Not Defined Any of Above. \n");
	#endif

	#if 5<8 == 1
		printf ("if 5<8 is true. \n");
	#endif
	
	
	#undef PI	// we undefined the PI now.
	#ifdef PI
    		cout<<"PI is defined."<<endl;
	#else
		cout<<"PI is undefined"<<endl;
	#endif
   
   
   

	printf("file = %s\n",__FILE__);
   return 0;
}
