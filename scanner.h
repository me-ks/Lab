#ifndef SCANNER_H
#define SCANNER_H

#include <string>

// Validates a part of the string
bool validateSubstring(const std::string& sub, std::string& errorMessage);

// Validates the full string
bool validateString(const std::string& s, std::string& errorMessage);

#endif // SCANNER_H
