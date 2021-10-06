// Copyright (c) 2020 Sydney Kuhn All rights reserved
//
// Created by: Sydney Kuhn
// Created on: Oct 2020
// This program calculates the squares of sequential numbers starting at 0

#include <iostream>
#include <string>

int main() {
    // this function uses a loop
    std::string numberAmountAsString;
    std::string userInputAsString;
    int numberAmount;
    int userInput;
    int loopCounter = 1;
    int total = 0;

    // input
    std::cout << "How many numbers would you like to add together : ";
    std::cin >> numberAmountAsString;

    // process & output
    try {
        numberAmount = std::stoi(numberAmountAsString);
        for (loopCounter = 0; numberAmount > loopCounter; loopCounter++) {
            std::cout << "Enter a number to add : ";
            std::cin >> userInputAsString;
            userInput = std::stoi(userInputAsString);
            if (userInput < 0) {
                continue;
            } total += userInput;
            }
        std::cout << "The sum of just the positive numbers is = " ""
        << total << std::endl;
    } catch (std::invalid_argument) {
        std::cout << "Invalid integer entered, please try again."
        << std::endl;
    }
    std::cout << "\nDone." << std::endl;
}
