#include <iostream>
#include <random>
#include <algorithm>
#include <string>
#include "Utility.h"
#include "Car.h"

int main() {
    auto integers = randomIntegers();
    std::cout << "Initial: " << integers << "\n";

    // TODO: make the sequence a bitonic sequence
    std::sort(integers.begin(), integers.begin() + integers.size() / 2);
    std::sort(integers.begin() + integers.size() / 2, integers.end());
    std::reverse(integers.begin() + integers.size() / 2, integers.end());
    std::cout << "Bitonic: " << integers << "\n";
}