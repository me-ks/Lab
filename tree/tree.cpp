#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <thread>
#include <chrono>
#include <windows.h>

void clearConsole() {
    system("cls");
}

void applyColor(int color) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, color);
}

int randomColor() {
    const int colorOptions[] = { 4, 6, 1, 5, 9 };
    return colorOptions[rand() % 5];
}

void drawTriangle(int height, int width, std::ofstream& file) {
    const char symbols[] = { '@', '#', '$', '%', '&', '+' };

    for (int row = 1; row <= height; ++row) {
        int spaces = width - row;
        file << std::string(spaces, ' ');
        std::cout << std::string(spaces, ' ');

        for (int star = 0; star < 2 * row - 1; ++star) {
            char symbol = (rand() % 6 == 0) ? symbols[rand() % 6] : '*';
            applyColor((symbol == '*') ? 2 : randomColor());

            file << symbol;
            std::cout << symbol;
        }
        file << '\n';
        std::cout << '\n';
    }
}

void drawTrunk(int height, int width, std::ofstream& file) {
    int trunkWidth = 3;
    int padding = (width - trunkWidth) / 2;

    for (int row = 0; row < height; ++row) {
        file << std::string(padding, ' ') << std::string(trunkWidth, '*') << '\n';
        std::cout << std::string(padding, ' ') << std::string(trunkWidth, '*') << '\n';
        applyColor(2);
    }
}

void constructTree(int sections, std::ofstream& file) {
    int baseWidth = sections + 2;
    for (int i = 1; i <= sections; ++i) {
        drawTriangle(i + 1, baseWidth, file);
    }
    drawTrunk(sections / 2, baseWidth * 2 - 1, file);
}

void displayAnimatedTree(int sections, int delay = 1000) {
    std::ofstream file("tree.txt", std::ios::app);

    while (true) {
        clearConsole();
        constructTree(sections, file);
        file << "\n\n";
        file.flush();
        std::this_thread::sleep_for(std::chrono::milliseconds(delay));
    }
}

int main() {
    srand(static_cast<unsigned int>(time(0)));

    int levels;
    std::cout << "Enter the number of tree levels: ";
    std::cin >> levels;

    displayAnimatedTree(levels);

    return 0;
}
