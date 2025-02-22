// This is a single line comment.

/* This is a 
multi-line
comment. */

/* We begin our programmes by including a header file. In this case "iostream", which
includes basic input and output operations. */

#include <iostream>

/* We include a main function where the main programme begins. We then use the "standard"
name space to use the "character output", followed by two "<<" to display characters. 
When we want to display multiple strings in succession we have to end the string, 
which can be done by "std::endl", which flushes the output buffer or better performance 
wise "\n". At the end of a line of code we have to include ";" to let the compiler know it's the end of
this line of code. We return 0 at the end of the function to indicate there were no 
issues. */

int main(){
    std::cout << "Hello World" << "\n";
    std::cout << "Hi World" << "\n";
    return 0; 
}