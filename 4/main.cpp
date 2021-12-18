#include <iostream>
#include <random>
#include <algorithm>
#include <string>
#include "Utility.h"
#include "Car.h"

bool anyPrime(const std::vector<int>& values);

int main() {
    std::vector<int> integers = {6, 9, 53, 4};
    std::cout << "Integers: " << integers << "\n";
    std::cout << "Are there any primes? " << (anyPrime(integers) ? "yes" : "no") << "\n";
}

bool anyPrime(const std::vector<int>& values) {
    // TODO: return true if any of the values are prime numbers
    auto result = true;

    for (int integer : values) {
        if (integer == 0 || integer == 1) {
            result = true;
            break;
        }
        else {
            for (int i = 2; i < integer; i++) {
                if (integer % i != 0) {
                    result = true;
                }
                else {
                    result = false;
                    break;
                }
            }

            if (result) {
                break;
            }
        }
    }

    return result;
}