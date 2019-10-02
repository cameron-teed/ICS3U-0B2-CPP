// Copyright(c) 2019 Cameron Teed All rights reserved.
//
// Created by: Cameron Teed
// Created on: September 2019
// This program adds two numbers

#include <iostream>
#include <cmath>



int main() {
     // This program adds two numbers

    const float FORMULA = 7.66312;
    float volume;
    float lenght;


    // input

    std::cout << "Enter the lenght of your dodecahydron: ";
    std::cin >> lenght;

    // process

    volume = FORMULA  * pow(lenght, 3);

    // output

    std::cout << "" << std::endl;
    std::cout << "The volume is " << volume << "cm³" << std::endl;
}
