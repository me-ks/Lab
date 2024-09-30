/**
 * Done by:
 * Full Name: Zablotskyi Maksym Serhiiovych
 * Student Group: 121
 * Lab 1.4
 */
#include <iostream>
#include <cmath>

int main() {
    unsigned short varA; // Declaration of the variable
    unsigned short* ptrB; // Declaration of the pointer
    ptrB = &varA; // Assigning the address of the variable to the pointer
    *ptrB = 43; // Assigning value through the pointer

    int varC;
    int* ptrD;
    ptrD = &varC;
    *ptrD = 5124;

    float varE;
    float* ptrF;
    ptrF = &varE;
    *ptrF = -8976.04;

    double varG;
    double* ptrH;
    ptrH = &varG;
    *ptrH = 3.5e-4;

    void* genericPtr; // Declaration of a void pointer
    int sizeVarA = sizeof(varA); // Declaration of variables for sizes
    int sizePtrB = sizeof(ptrB);
    int sizeVarC = sizeof(varC);
    int sizePtrD = sizeof(ptrD);
    int sizeVarE = sizeof(varE);
    int sizePtrF = sizeof(ptrF);
    int sizeVarG = sizeof(varG);
    int sizePtrH = sizeof(ptrH);

    genericPtr = &ptrB; // Assigning the address of a typed pointer to a void pointer
}
