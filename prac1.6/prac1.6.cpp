/**
 * Done by:
 * Student Name: Maksym Zablotskyi
 * Student Group: 121
 * Prac 1.6
 */

#include <iostream>

 // Check if two numbers are equal
bool areNumbersEqual(int num1, int num2) {
    return (num1 ^ num2) == 0;
}

// Check if a number is divisible by 8
bool isDivisibleBy8(int num) {
    return (num & 7) == 0;
}

// Perform bitwise operations between two numbers
void performBitwiseOperations(int num1, int num2) {
    std::cout << "num1 AND num2: " << (num1 & num2) << std::endl;
    std::cout << "num1 OR num2: " << (num1 | num2) << std::endl;
    std::cout << "num1 XOR num2: " << (num1 ^ num2) << std::endl;
}

// Addition of two numbers and bitwise NOT operation
void additionAndBitwiseNot(int num1, int num2) {
    int result = num1;
    // Add numbers using bitwise operations
    while (num2 != 0) {
        int carry = (num1 & num2) << 1;
        result = num1 ^ num2;
        num1 = result;
        num2 = carry;
    }
    std::cout << "num1 + num2: " << result << std::endl;
    // Bitwise NOT operation
    std::cout << "NOT num1: " << ~num1 << std::endl;
}

// Add two numbers using bitwise operations
int addWithBitwise(int num1, int num2) {
    while (num2 != 0) {
        int carry = (num1 & num2) << 1;
        num1 = num1 ^ num2;
        num2 = carry;
    }
    return num1;
}

// Perform shift operations
void shiftOperations(int number, int leftShift, int rightShift) {
    std::cout << "Shift left (" << leftShift << "): " << (number << leftShift) << std::endl;
    std::cout << "Shift right (" << rightShift << "): " << (number >> rightShift) << std::endl;
}

int main() {
    int num1 = 5, num2 = 5;
    // Check if num1 and num2 are equal
    std::cout << "Are num1 and num2 equal? " << (areNumbersEqual(num1, num2) ? "Yes" : "No") << std::endl;

    num1 = 16;
    // Check if num1 is divisible by 8
    std::cout << "Is num1 divisible by 8? " << (isDivisibleBy8(num1) ? "Yes" : "No") << std::endl;

    num1 = 6; num2 = 3;
    // Perform bitwise operations between num1 and num2
    std::cout << "Bitwise operations between num1 and num2:" << std::endl;
    performBitwiseOperations(num1, num2);

    num1 = 5; num2 = 3;
    // Perform addition and bitwise NOT operations
    std::cout << "Addition and NOT operations between num1 and num2:" << std::endl;
    additionAndBitwiseNot(num1, num2);

    num1 = 15; num2 = 12;
    // Add num1 and num2 using bitwise operations
    std::cout << "Sum of num1 and num2 using bitwise operations: " << addWithBitwise(num1, num2) << std::endl;

    int number = 13;
    // Perform shift operations on the number
    std::cout << "Shift operations on the number:" << std::endl;
    shiftOperations(number, 2, 1);

    return 0;
}
