#ifndef HELLOWORLD_CPP
#define HELLOWORLD_CPP

// Jeffrey Blinks
//
// A simple "Hello World" program

#include <iostream>

int main() {

    // Print "Hello, World!" (minus the quotation marks)
    std::cout << "Hello, World!" << std::endl;

    char c;
    if ( std::cin >> c ) // require input to close window
        return 0; // Return 0 for successful execution

    return 1; // We should not get here
}

#endif // HELLOWORLD_CPP
