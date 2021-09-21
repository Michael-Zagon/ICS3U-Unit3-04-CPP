// Copyright (c) 2021 Michael Zagon All rights reserved

// Created by: Michael Zagon
// Created on: September 2021
// This program determines whether an integer is positive, negative or neutral

#include <iostream>

int main() {
    // This function determines whether an integer is
    //     positive, negative or neutral

    int integer;

    // Input
    std::cout << "Enter an integer: ";
    std::cin >> integer;
    std::cout << "" << std::endl;

    // Process and output
    if (integer > 0) {
        std::cout << ("This number is positive") << std::endl;
    } else if (integer < 0) {
        std::cout << ("This number is negative");
    } else {
        std::cout << ("This number is neutral") << std::endl;
    }

    std::cout << "" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "Done." << std::endl;
}
