/**
* Done by:
 * Student Name: Maksym Zablotskyi
 * Student Group: 121
 * Prac 1.4
 */

#include <iostream>
#include <cmath>

 // Function to calculate the sum of numbers from 1 to 5
int calculateSumUpToFive() {
    int total = 0;
    for (int i = 1; i <= 5; ++i) {
        total += i;
    }
    return total;
}

// Function to compute the factorial of a given number
int computeFactorial(int num) {
    int result = 1;
    for (int i = 2; i <= num; ++i) {
        result *= i;
    }
    return result;
}

// Function to find the sum of even numbers from 0 to a given number
int sumEvenNumbersUpTo(int limit) {
    int sum = 0;
    for (int i = 0; i <= limit; i += 2) {
        sum += i;
    }
    return sum;
}

// Function to calculate the product of an arithmetic progression
int calculateAPProduct(int firstTerm, int difference, int termCount) {
    int product = 1;
    for (int i = 0; i < termCount; ++i) {
        product *= (firstTerm + i * difference);
    }
    return product;
}

// Function to tabulate the cosine function values with a given step
void cosineFunctionTabulation(double stepSize) {
    for (double x = 0.0; x <= M_PI; x += stepSize) {
        std::cout << "cos(" << x << ") = " << std::cos(x) << std::endl;
    }
}

int main() {
    std::cout << "Sum from 1 to 5: " << calculateSumUpToFive() << std::endl;

    int number;
    std::cout << "Enter a number for factorial calculation: ";
    std::cin >> number;
    std::cout << "Factorial of " << number << ": " << computeFactorial(number) << std::endl;

    std::cout << "Enter an upper limit to sum even numbers up to: ";
    std::cin >> number;
    std::cout << "Sum of even numbers from 0 to " << number << ": " << sumEvenNumbersUpTo(number) << std::endl;

    int firstTerm, commonDiff, terms;
    std::cout << "Enter the first term, common difference, and number of terms for arithmetic progression: ";
    std::cin >> firstTerm >> commonDiff >> terms;
    std::cout << "Product of the first " << terms << " terms of the arithmetic progression: "
        << calculateAPProduct(firstTerm, commonDiff, terms) << std::endl;

    std::cout << "Tabulating f(x) = cos(x) from 0 to π with a step size of 0.01:" << std::endl;
    cosineFunctionTabulation(0.01);

    return 0;
}
