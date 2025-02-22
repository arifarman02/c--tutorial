/* A variable holds data. There are two ways of creating and using a variable. 
Declaration and assignment. To declare a variable we need to list the data type of what 
we are storing. */

#include <iostream>

int main(){

    int x; //declaration
    x = 5; //assignment

    int y = 4;

    std::cout << x << "\n";
    std::cout << y << "\n";

    int sum = x + y;

    std::cout << sum << "\n";
}