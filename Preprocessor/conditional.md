## Conditional Compilation

A preprocessor conditional compilation directive causes the preprocessor to conditionally suppress the compilation of portions of source code.

## Conditional inclusions (#ifdef, #ifndef, #if, #endif, #else and #elif)

These directives allow to include or discard part of the code of a program if a certain condition is met.


> syntax
```
#if expression		
#ifdef identifier		
#ifndef identifier		
#elif expression		
#elifdef identifier		(since C++23)
#elifndef identifier		(since C++23)
#else		
#endif
```

> Explanation

The conditional preprocessing block starts with #if, #ifdef or #ifndef directive, then optionally includes any number of #elif, #elifdef, or #elifndef (since C++23) directives, then optionally includes at most one #else directive and is terminated with #endif directive. Any inner conditional preprocessing blocks are processed separately.

Each of #if, #ifdef, #ifndef, #elif, #elifdef, #elifndef (since C++23), and #else directives control the code block until the first #elif, #elifdef, #elifndef (since C++23), #else, #endif directive not belonging to any inner conditional preprocessing blocks.

#if, #ifdef and #ifndef directives test the specified condition (see below) and if it evaluates to true, compiles the controlled code block. In that case subsequent #else, #elifdef, #elifndef, (since C++23) and #elif directives are ignored. Otherwise, if the specified condition evaluates false, the controlled code block is skipped and the subsequent #else, #elifdef, #elifndef, (since C++23) or #elif directive (if any) is processed. If the subsequent directive is #else, the code block controlled by the #else directive is unconditionally compiled. Otherwise, the #elif, #elifdef, or #elifndef (since C++23) directive acts as if it was #if directive: checks for condition, compiles or skips the controlled code block based on the result, and in the latter case processes subsequent #elif, #elifdef, #elifndef, (since C++23) and #else directives. The conditional preprocessing block is terminated by #endif directive.


* #ifdef allows a section of a program to be compiled only if the macro that is specified as the parameter has been defined, no matter which its value is.

example:
```
#define TABLE_SIZE 5 
#ifdef TABLE_SIZE
int table[TABLE_SIZE];
#endif  
```

In this case, the line of code int table[TABLE_SIZE]; is only compiled if TABLE_SIZE was previously defined with #define, independently of its value. If it was not defined, that line will not be included in the program compilation.

* #ifndef serves for the exact opposite: the code between #ifndef and #endif directives is only compiled if the specified identifier has not been previously defined.

For example:
```
#ifndef TABLE_SIZE
#define TABLE_SIZE 100
#endif
int table[TABLE_SIZE];
```

In this case, if when arriving at this piece of code, the TABLE_SIZE macro has not been defined yet, it would be defined to a value of 100. If it already existed it would keep its previous value since the #define directive would not be executed.

* The #if, #else and #elif (i.e., "else if") directives serve to specify some condition to be met in order for the portion of code they surround to be compiled. The condition that follows #if or #elif can only evaluate constant expressions, including macro expressions. For example:

```
#if TABLE_SIZE>200
#undef TABLE_SIZE
#define TABLE_SIZE 200
 
#elif TABLE_SIZE<50
#undef TABLE_SIZE
#define TABLE_SIZE 50
 
#else
#undef TABLE_SIZE
#define TABLE_SIZE 100
#endif
 
int table[TABLE_SIZE];
```

Notice how the entire structure of #if, #elif and #else chained directives ends with #endif.

The behavior of #ifdef and #ifndef can also be achieved by using the special operators defined and !defined respectively in any #if or #elif directive:
	
```
#if defined ARRAY_SIZE
#define TABLE_SIZE ARRAY_SIZE
#elif !defined BUFFER_SIZE
#define TABLE_SIZE 128
#else
#define TABLE_SIZE BUFFER_SIZE
#endif 
```

> #undef Directive
To undefine an existing macro, we use the #undef directive. The #undef directive is often used in combination with the #define directive to specify a section in a source code where a macro holds a specific meaning.


```
#include<iostream>
#define PI 3.14

using namespace std;

int main()
{
	#undef PI
	#ifdef PI
    		cout<<"PI is defined.";
	#else
		cout<<"PI is undefined";
	#endif

	return 0;
}

```

> #if, #else and #elif

The #if directive has the following syntax:

#if constant-expression newline
This directive checks whether the constant-expression is true (nonzero).

These directives works together and control compilation of portions of the program using some conditions. If the condition with the #if directive evaluates to a non zero value, then the group of line immediately after the #if directive will be executed otherwise if the condition with the #elif directive evaluates to a non zero value, then the group of line immediately after the #elif directive will be executed else the lines after #else directive will be executed.

Syntax:
```
#if macro_condition
   statements
#elif macro_condition
   statements
#else
   statements
#endif
```
* The #if directive takes a numerical argument that evaluates to true if it's non-zero. If its argument is false, then code until the closing #else, #elif, of #endif will be excluded. 
* 0 represent false while non zero represent true

example = 
```
#include<iostream>
 
#define var 7
  
#if var > 200
  
#elif gfg < 50
   
#else

#endif
 
```

### Commenting out Code
Conditional compilation is a particularly useful way to comment out a block of code that contains multi-line comments (which cannot be nested).
```
#if 0
/* comment ...
*/
 // never executed.
// code
 
/* comment */
#endif
```
