#include <iostream>

int main() {
    //output hello world to the command line
    std::cout << "Hello, World!" << std::endl;

    //initialize some integer variables
    int a = 0;
    int b = 3;
    //ask the user to enter a number
    std:: cout << "please enter a number: ";

    //read in the users number into a variable a
    std::cin >> a;

    std:: cout << "please enter a number: ";

    //read in the users number into a variable a
    std::cin >> b;

    //output the variable a to the command line
    std::cout << " Your number is" << a + b << std::endl;
    return 0;
}