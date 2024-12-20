#include <iostream>
#include <string>
#include "scanner.h"

#ifdef _WIN32
#include <windows.h>
#endif

int main() {
    // Enable Unicode support for Windows console
#ifdef _WIN32
    SetConsoleOutputCP(65001); // Set UTF-8 encoding
#endif

    std::string inputLine;
    std::string errorMessage;

    std::cout << "Enter a string to validate: ";
    std::cin >> inputLine;

    // Validate the string
    if (validateString(inputLine, errorMessage)) {
        std::cout << "[OK] The string meets the criteria.\n";
    }
    else {
        std::cout << "[ERROR] " << errorMessage << "\n";
    }

    return 0;
}
