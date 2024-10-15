/**
 * Done by:
 * Student Name: Maksym Zablotskyi
 * Student Group: 121
 * Prac 1.5
 */

#include <iostream>
#include <vector>
#include <limits>

int getMinimumValue(const std::vector<int>& array) {
    int minimum = array[0];
    for (size_t i = 1; i < array.size(); ++i) {
        if (array[i] < minimum) {
            minimum = array[i];
        }
    }
    return minimum;
}

int getMaxPositiveIndex(const std::vector<int>& array) {
    int maxIdx = -1;
    int maxVal = std::numeric_limits<int>::min();
    for (size_t i = 0; i < array.size(); ++i) {
        if (array[i] > 0 && array[i] > maxVal) {
            maxVal = array[i];
            maxIdx = i;
        }
    }
    return maxIdx;
}

int findSmallestAboveThreshold(const std::vector<int>& array, int threshold) {
    int minAbove = std::numeric_limits<int>::max();
    for (const auto& num : array) {
        if (num > threshold && num < minAbove) {
            minAbove = num;
        }
    }
    return minAbove == std::numeric_limits<int>::max() ? -1 : minAbove;
}

int getLastOccurrenceIndex(const std::vector<int>& array, int value) {
    int lastIdx = -1;
    for (size_t i = 0; i < array.size(); ++i) {
        if (array[i] == value) {
            lastIdx = i;
        }
    }
    return lastIdx;
}

int countValueOccurrences(const std::vector<int>& array, int value) {
    int occurrenceCount = 0;
    for (const auto& num : array) {
        if (num == value) {
            ++occurrenceCount;
        }
    }
    return occurrenceCount;
}

int getFirstOccurrenceIndex(const std::vector<int>& array, int value) {
    for (size_t i = 0; i < array.size(); ++i) {
        if (array[i] == value) {
            return i;
        }
    }
    return -1;
}

int getMinimumPositiveValue(const std::vector<int>& array) {
    int minPositive = std::numeric_limits<int>::max();
    for (const auto& num : array) {
        if (num > 0 && num < minPositive) {
            minPositive = num;
        }
    }
    return minPositive == std::numeric_limits<int>::max() ? -1 : minPositive;
}

int main() {
    std::vector<int> array = { 3, -1, 4, -5, 6, 2, 9, -7 };
    int target = 4;

    std::cout << "Minimum value in array: " << getMinimumValue(array) << std::endl;
    std::cout << "Index of maximum positive value: " << getMaxPositiveIndex(array) << std::endl;
    std::cout << "Minimum value greater than " << target << ": " << findSmallestAboveThreshold(array, target) << std::endl;
    std::cout << "Last occurrence of " << target << ": " << getLastOccurrenceIndex(array, target) << std::endl;
    std::cout << "Occurrences of " << target << ": " << countValueOccurrences(array, target) << std::endl;
    std::cout << "First occurrence of " << target << ": " << getFirstOccurrenceIndex(array, target) << std::endl;
    std::cout << "Minimum positive value in array: " << getMinimumPositiveValue(array) << std::endl;

    return 0;
}
