// Copyright (c) 2026 Deepak V rights reserved
// Created by: Deepak V
// Date: Oct. 11, 2026
// This program asks the user for the semi-major and semi-minor axes of an ellipse
#include <cmath>
#include <iostream>

int main() {
    // declare variables
    int a;
    int b;
    int area;
    int perimeter;
    int pi = M_PI;

    // get the semi-major axis from the user
    std::cout << "Enter the semi-major axis (cm): ";
    std::cin >> a;
    std::cout << "Enter the semi-minor axis (cm): ";
    std::cin >> b;

    // calculate the area and perimeter
    area = pi * a * b;
    perimeter = pi * (3 * (a + b) - sqrt((3 * a + b) * (a + 3 * b)));

    // display the area and perimeter
    std::cout << "The area is: " << area << "cm²" << std::endl;
    std::cout << "The perimeter is: " << perimeter << "cm" << std::endl;
}