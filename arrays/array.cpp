#include <iostream>

int main() {
    int numbers[100];

    for (int i = 0; i < 100; i++) {
        numbers[i] = i;
    }

    // Print memory address using & operator
    std::cout << "Memory address of numbers array: " << &numbers << std::endl;
    
    // Print memory address of n element
    std::cout << "Memory address of first element: " << &numbers[2] << std::endl;
    
    // Alternative way using array name directly (points to first element)
    std::cout << "Memory address using array name: " << numbers << std::endl;
    


    return 0;
}