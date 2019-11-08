// Copyright (c) 2019 Jacob Bonner All rights reserved.
//
// Created by: Jacob Bonner
// Created on: November 2019
// This program outputs all integers between 1000 - 2000

#include <iostream>

int main() {
    // This program outputs all integers between 1000 - 2000

    // Variables
    int counter;

    // Process
    for (counter = 1000; counter <= 2000; counter++) {
        std::cout << counter << " ";
        if (counter % 5 == 4) {
            std::cout << " " << std::endl;
        }
    }
}
