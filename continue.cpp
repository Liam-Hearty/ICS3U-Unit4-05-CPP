// Copyright (c) 2019 Liam Hearty All rights reserved.
//
// Created by: Liam Hearty
// Created on: October 2019
// This program uses a while loop to add all whole numbers from 1 to the
// chosen_number


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>


// This function uses a while loop
int main() {
    int loop_counter;
    std::string chosen_number_as_string;
    int chosen_number;
    std::string adding_number_as_string;
    int adding_number;
    int answer = 0;

    try {
        std::cout << "How many numbers are you going to add: " << std::endl;
        std::cin >> adding_number_as_string;
        adding_number = std::stoi(adding_number_as_string);

        for (loop_counter=0; loop_counter < adding_number; loop_counter++) {
                std::cout << "Input a positive integer: " << std::endl;
                std::cin >> chosen_number_as_string;
                chosen_number = std::stoi(chosen_number_as_string);

                if (chosen_number < 0) {
                    continue;
                } else {
                    answer = answer + chosen_number;
                    continue;
        }}
        std::cout << answer << std::endl;
    } catch(std::invalid_argument) {
        std::cout << "Please type in a whole number." << std::endl;
}}
