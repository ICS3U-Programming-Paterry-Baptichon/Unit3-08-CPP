// Copyright (c) 2022 Paterry Baptichon All rights reserved
//
// Created by Paterry Baptichon Juninor
// Created on 2022-04-15
// this program tells you if the year entered is a leap year

#include <iostream>
#include <string>

int main() {
    // this program tells you if the year entered is a leap year
    std::string year_string;
    int year;

    // The user's input
    std::cout << "Enter a year please:";
    std::cin >> year_string;
    std::cout << "" << std::endl;


    // The process of the leap year and it's output
    try {
        year = std::stoi(year_string);
        if (year % 4 == 0) {
            if (year % 100 == 0) {
                if (year % 400 == 0) {
                    std::cout << year << " is a leap year." << std::endl;
               } else {
                    std::cout << year << " is a common year." << std::endl;
               }
            } else {
                std::cout << year << " is a leap year." << std::endl;
            }
    }   else {
            std::cout << year << " is a common year." << std::endl;
    }
    }catch (std::invalid_argument) {
        std::cout << "That was not a year. Try again.";
    }
}
