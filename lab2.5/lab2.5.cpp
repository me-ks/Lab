/**
 * Done by:
 * Student Name: Maksym Zablotskyi
 * Student Group: 121
 * Lab 2.5
 **/

#include <iostream>
#include <cstdlib>

struct Node1 {
    double value = 0;
    Node1* next = nullptr;

    void append(double newValue) {
        Node1* current = this;

        while (current->next != nullptr) {
            current = current->next;
        }

        Node1* newNode = new Node1;
        newNode->value = newValue;
        current->next = newNode;
    }
};

inline bool isInRange(Node1* element, double minVal, double maxVal) {
    return element->value != 0 && element->value >= minVal && element->value <= maxVal;
}

struct Node2 {
    double value = 0;
    Node2* next = nullptr;

    void append(double newValue) {
        Node2* newNode = new Node2;
        newNode->value = newValue;

        Node2* current = this;

        while (current->next != nullptr) {
            current = current->next;
        }

        current->next = newNode;
    }
};

void populateList(Node1* list);
void createSecondList(Node1* sourceList, Node2* resultList, double minVal, double maxVal);

int main() {
    Node1* primaryList = new Node1;
    primaryList->value = 5.5;
    primaryList->append(-3.2);
    primaryList->append(15.4);
    primaryList->append(0.0);
    primaryList->append(8.7);
    primaryList->append(-10.5);

    Node2* secondaryList = new Node2;
    double minVal = -10;  // Adjust range according to requirements
    double maxVal = 10;
    createSecondList(primaryList, secondaryList, minVal, maxVal);

    std::cout << "Primary List: ";
    Node1* temp1 = primaryList;
    while (temp1 != nullptr) {
        std::cout << temp1->value << " ";
        temp1 = temp1->next;
    }
    std::cout << "\nSecondary List (filtered values): ";
    Node2* temp2 = secondaryList;
    while (temp2 != nullptr) {
        std::cout << temp2->value << " ";
        temp2 = temp2->next;
    }
    std::cout << std::endl;

    return 0;
}

void populateList(Node1* list) {
    for (int i = 0; i < 7; i++) {
        double randomValue = static_cast<double>(rand() % 200 - 100) / 10.0;

        if (i == 0) {
            list->value = randomValue;
            continue;
        }

        list->append(randomValue);
    }
}

void createSecondList(Node1* sourceList, Node2* resultList, double minVal, double maxVal) {
    Node1* current = sourceList;
    bool initialized = false;

    while (current != nullptr) {
        if (isInRange(current, minVal, maxVal)) {
            if (!initialized) {
                resultList->value = current->value;
                initialized = true;
            }
            else {
                resultList->append(current->value);
            }
        }
        current = current->next;
    }
}
