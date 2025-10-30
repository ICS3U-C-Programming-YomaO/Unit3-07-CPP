// Copyright (c) 2025 Yoma Ozoh All rights reserved.
//
// Created by: Yoma Ozoh
// Date: October 2025
// This program checks if user can date grandchild

#include <iostream>
#include <string>

int main() {
    int userAge;
    std::string userAgeAsString;

    // get user input as a string
    std::cout << "Hello, Enter your age please: ";
    std::cin >> userAgeAsString;

    int userAgeAsInt;

    try {
        // convert input to integer
        userAgeAsInt = std::stoi(userAgeAsString);

        // check if age fits requirements
        if (userAgeAsInt > 25 && userAgeAsInt < 40) {
            std::cout << "You can date my grandchild" << std::endl;
        } else {
            std::cout << "You cannot date my grandchild! " << std::endl;
        }
    } catch (std::invalid_argument) {
        // input was not a number
        std::cout << "ERROR! Please enter an integer!" << std::endl;
    }

    std::cout << "Thanks for playing!" << std::endl;
}
