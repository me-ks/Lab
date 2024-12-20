#include "scanner.h"

// Function to validate a substring
bool validateSubstring(const std::string& sub, std::string& errorMessage) {
    if (sub.empty()) {
        errorMessage = "The substring cannot be empty.";
        return false;
    }

    if (sub.front() != '_') { // Check if the first character is '_'
        errorMessage = "The substring must start with '_'.";
        return false;
    }

    // Check if the second character is '+' or '-'
    if (sub.size() < 2 || (sub[1] != '+' && sub[1] != '-')) {
        errorMessage = "The second character after '_' must be '+' or '-'.";
        return false;
    }

    // Validate the remaining characters (must be A..K)
    for (size_t i = 2; i < sub.size(); ++i) {
        char currentChar = sub[i];
        if (currentChar < 'A' || currentChar > 'K') {
            errorMessage = "Invalid character: '" + std::string(1, currentChar) +
                "'. Only characters from 'A' to 'K' are allowed.";
            return false;
        }
    }

    return true;
}

// Function to validate the entire string
bool validateString(const std::string& s, std::string& errorMessage) {
    // Pass the string directly to the substring validation
    if (!validateSubstring(s, errorMessage)) {
        errorMessage = "Error in the substring: " + errorMessage;
        return false;
    }
    return true;
}
