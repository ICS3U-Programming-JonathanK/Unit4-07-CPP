// Copyright (c) 2021 Jonathan Kene All rights reserved.
//
// Created by: Jonathan
// Created on: May 31, 2021
// The program will use one for loop and one if statement,
// outputting five integers per line with each separated by a space.
#include <iostream>

int main() {
// initilizations
int counter = 0;
int MIN_VALUE = 1000;
int MAX_VALUE = 2000;

    // do an if statement in a for loop to display the numbers in 5 per line
        for (counter = MIN_VALUE; counter <=MAX_VALUE; counter++) {
            if ((counter + 1) % 5 == 0) {
                std::cout << counter << std::endl;
            } else {
                std::cout << counter << " ";
        }
    }
}
