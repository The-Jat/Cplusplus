## Macro

The macro in C language is known as the piece of code which can be replaced by the macro value. The macro is defined with the help of #define preprocessor directive and the macro doesn’t end with a semicolon(;). Macro is just a name given to certain values or expressions it doesn't point to any memory location.

Whenever the compiler encounters the macro, it replaces the macro name with the macro value. Two macros could not have the same name.

The syntax of the macro is as shown in the following code. Here, we will have the three components:
```
#define PI 3.14
```
#define = Preprocessor Directive

PI = Macro Name

3.14 = Macro Value

```
#include<stdio.h>

// This is macro definition
#define PI 3.14

void main()
{
    // declaration and initialization of radius
    int radius = 5;
    // declaration and calculating the area
    float area = PI * (radius*radius); 
    
    // Printing the area of circle
    printf("Area of circle is %f", area);
}

```
