// Copyright (c) 2021 Jenoe Balote All rights reserved
//
// Created by Jenoe Balote
// Created on April 2021
// This program calculates the surface area of the rectangular prism
//     with dimensions inputted by the user

#include <iostream>
#include <cmath>

int main() {
    // variable declarations
    int length;
    int width;
    int height;
    int area;

    // input
    std::cout << "Welcome! Let's calculate the surface area of..." << std::endl;
    std::cout << "a rectangular prism!" << std::endl;
    std::cout << "Follow the prompts down below." << std::endl;
    std::cout << "" << std::endl;
    std::cout << "Enter the length of the rectangle (cm): " << std::endl;
    std::cin >> length;
    std::cout << "Enter the width of the rectangle (cm): " << std::endl;
    std::cin >> width;
    std::cout << "Enter the height of the rectangle (cm): " << std::endl;
    std::cin >> height;

    // process
    area = 2 * ((length * width) + (height * length) + (height * width));

    // output
    std::cout << "" << std::endl;
    std::cout << "The surface area is: " << area << " cm²." << std::endl;
    std::cout << "" << std::endl;
    std::cout << "Thanks for using this program, catch you later!" << std::endl;
}
