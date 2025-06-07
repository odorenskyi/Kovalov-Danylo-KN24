#include <iostream>
#include <fstream>
#include <windows.h>
#include "ModulesKovalov.h"

bool verifyPath() {
    char path[MAX_PATH];
    GetCurrentDirectory(MAX_PATH, path);
    std::string currentPath(path);
    return currentPath.find("Lab12\\prj") != std::string::npos;
}

void performTests() {
    std::ofstream out("..\\TestSuite\\TestResults.txt");
    
    // Тест 1
    ClassLab12_Kovalov sphere1(1.0);
    out << "Тест 1: " << (abs(sphere1.calculateVolume() - 4.18879) < 0.0001 ? "УСПІШНО" : "НЕВДАЧА") << "\n";

    // Тест 2
    try {
        ClassLab12_Kovalov sphere2(-1.0);
        out << "Тест 2: НЕВДАЧА\n";
    } catch (...) {
        out << "Тест 2: УСПІШНО\n";
    }

    // Тест 3
    ClassLab12_Kovalov sphere3;
    sphere3.setRadius(2.0);
    out << "Тест 3: " << (abs(sphere3.calculateVolume() - 33.5103) < 0.0001 ? "УСПІШНО" : "НЕВДАЧА") << "\n";

    out.close();
}

int main() {
    for (int i = 0; i < 100; i++) {
        Beep(700, 100);
        Sleep(50);
    }

    if (!verifyPath()) {
        std::ofstream out("..\\TestSuite\\TestResults.txt");
        out << "Порушено вимоги до структури проекту!\n";
        out.close();
        return 1;
    }

    performTests();
    return 0;
}
