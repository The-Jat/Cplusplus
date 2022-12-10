## Include directives


By using this pre-processor, we can include a file in another file. Generally, by using this pre-processor, we are including the Header file. A header file is a source file that contains forward declaration of predefined functions, global variables, constants value, predefined datatypes, predefined structures, predefined macros, inline functions. .h files don’t provide any implementation part of predefined functions; it provides only forward declaration (prototype). A C program is a combination of predefined and user-defined functions. .C file contains the implementation part of user-defined functions and calling statements of predefined functions. If the functions are user-defined or predefined, the logic part must be required. Project-related .obj files provide the implementation of user-defined functions, .lib files provides implementation part of pre-defined functions which is loaded at the time of linking.

As per the function approach, when we are calling a function which is defined later for avoiding the compilation error, we are required to go for forwarding declaration i.e. prototype is required. If the function is user-defined, we can provide forward declaration explicitly but if it is the pre-defined function, we required to use header-file. In C programming language, .h files provide prototypes of pre-defined function. As a programmer, it is possible to provide the forward declaration of pre-defined function explicitly but when we are providing forward declaration then compiler thinks it is a user-defined function so not recommended. .h files don’t pass for compilation process but .h file code is compiled. When we are including any header files at the time of pre-processing, that header file code will be substituted into current source code and with current source code header file code also compile.

Syntax:

> #include<filename.h> Or #include “filename.h”

### #include<filename.h>:
By using this syntax, when we are including header file then it will be loaded from default directory i.e. C:\TC\INCLUDE. Generally, by using this syntax we are including pre-defined header files. When we are including pre-defined header files. When we are including user-defined header files by using this syntax then we need to place a user-defined header file in predefined header directory i.e. C:\TC\INCLUDE.

### #include “filename.h”:
By using this syntax, when we are including header, then it is loaded from the current working directory. Generally, by using this syntax we are including user-defined header files. By using this syntax, when we are including pre-defined header files then first it will search in the current project directory if it is not available then loaded from default directory so it is a time-taking process.
