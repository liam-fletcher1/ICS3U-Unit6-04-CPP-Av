// Copyright (c) 2021 Liam Fletcher All rights reserved.
//
// Created by: Liam Fletcher
// Created on: Oct 2021
// This program uses a 2D array to find the average of numbers


#include <iostream>
#include <random>


template <int rows, int columns>
int AvNumbers(int (&randomGrid)[rows][columns], int rowEle, int columnEle) {
    // this function adds up all the numbers in  a 2D array

    int total = 0;

    // process
    for (size_t rowVal = 0; rowVal < rows; rowVal++) {
        for (size_t columnVal = 0; columnVal < columns; columnVal++)
            total += randomGrid[rowVal][columnVal];
    }
    total = total / (rowEle * columnEle);

    return total;
}


int main() {
    // this function uses a 2D array

    int randomNum = 0;
    int total;
    const int rows = 3;
    const int columns = 3;
    int arr[rows][columns];

    std::random_device rseed;
    std::mt19937 rgen(rseed());
    std::uniform_int_distribution<int> idist(0, 50);

    // output
    for (int rowVal = 0; rowVal < rows; rowVal++) {
        for (int columnVal = 0; columnVal < columns; columnVal++) {
            randomNum = idist(rgen);
            arr[rowVal][columnVal] = randomNum;
            std::cout << randomNum << ", ";
        }
        std::cout << std::endl;
    }

    total = AvNumbers(arr, rows, columns);
    std::cout << "" << std::endl;
    std::cout << "The average of all the numbers is: "
    << total << std::endl;
}
