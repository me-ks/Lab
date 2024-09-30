#include <iostream>

int main() {
    // Task 1: Declare and initialize variables
    float a1 = 76, b1 = 24, c1 = 8.2, d1 =8.2; // Variables for the first expression
    bool result1 = !((a1!=b1)&&((c1==d1)));    // Logical expression for result 1

    float a2 = 85, b2 = 85, c2 = 6.4, d2 = 9.3;  // Variables for the second expression
    bool result2 = !((a2!=b2)&&((c2==d2)));    // Logical expression for result 2

    // Output the results of the first and second expressions
    std::cout << "Result 1: " << result1 << '\n';
    std::cout << "Result 2: " << result2 << '\n';

    // Task 2: Declare constant and variables
    const long constA = 49; // Declare a constant
    long B = -65, E = 2;    // Variables B and E
    long C;                 // Declare variable C for later use

    // Declare a pointer and assign it to variable C
    long* ptrC = &C; // Pointer ptrC stores the address of variable C
    *ptrC = 23;      // Assign value to C through the pointer

    // Create a complex expression for the second task
    bool result3 = ((constA ^ (-B)) - *ptrC) >= (13 + (E << sizeof(long)));

    // Output the result of the third expression
    std::cout << "Result 3: " << result3 << '\n';

    return 0;
}
