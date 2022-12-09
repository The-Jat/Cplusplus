## conditional compilation

A preprocessor conditional compilation directive causes the preprocessor to conditionally suppress the compilation of portions of source code. 

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
