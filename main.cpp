#include <iostream>
#include "src/calculator.h"

float main() {
    // Test case 1: Addition
    float result1 = calculator(5.0, '+', 3.0);
    if (result1 == 8.0) {
        std::cout << "Test case 1 (Addition) passed." << std::endl;
    } else {
        std::cout << "Test case 1 (Addition) failed. Expected 8, got " << result1 << std::endl;
    }

    // Test case 2: Subtraction
    float result2 = calculator(10.0, '-', 4.0);
    if (result2 == 6.0) {
        std::cout << "Test case 2 (Subtraction) passed." << std::endl;
    } else {
        std::cout << "Test case 2 (Subtraction) failed. Expected 6, got " << result2 << std::endl;
    }

    // Test case 3: Multiplication
    float result3 = calculator(7.0, '*', 2.0);
    if (result3 == 14.0) {
        std::cout << "Test case 3 (Multiplication) passed." << std::endl;
    } else {
        std::cout << "Test case 3 (Multiplication) failed. Expected 14, got " << result3 << std::endl;
    }

    // Test case 4: Division
    float result4 = calculator(15.0, '/', 3.0);
    if (result4 == 5.0) {
        std::cout << "Test case 4 (Division) passed." << std::endl;
    } else {
        std::cout << "Test case 4 (Division) failed. Expected 5, got " << result4 << std::endl;
    }

    // Test case 5: Division by zero
    float result5 = calculator(10.0, '/', 0.0);
    if (result5 == 1.0) {
        std::cout << "Test case 5 (Division by zero) passed." << std::endl;
    } else {
        std::cout << "Test case 5 (Division by zero) failed. Expected 1, got " << result5 << std::endl;
    }

    // Test case 6: Invalid operator
    float result6 = calculator(8.0, '%', 2.0);
    if (result6 == 1.0) {
        std::cout << "Test case 6 (Invalid operator) passed." << std::endl;
    } else {
        std::cout << "Test case 6 (Invalid operator) failed. Expected 1, got " << result6 << std::endl;
    }

    // Test case 7: Large numbers addition
    float result7 = calculator(2147483646.0, '+', 1.0);
    if (result7 == 2147483647.0) {
        std::cout << "Test case 7 (Large numbers addition) passed." << std::endl;
    } else {
        std::cout << "Test case 7 (Large numbers addition) failed. Expected 2147483647, got " << result7 << std::endl;
    }

    // Test case 8: Large numbers multiplication
    float result8 = calculator(46340.0, '*', 46340.0); // 46340 * 46340 is the maximum for 32-bit integers
    if (result8 == 2147395600.0) {
        std::cout << "Test case 8 (Large numbers multiplication) passed." << std::endl;
    } else {
        std::cout << "Test case 8 (Large numbers multiplication) failed. Expected 2147395600, got " << result8 << std::endl;
    }

    // Test case 9: Negative numbers subtraction
    float result9 = calculator(-5.0, '-', -3.0);
    if (result9 == -2.0) {
        std::cout << "Test case 9 (Negative numbers subtraction) passed." << std::endl;
    } else {
        std::cout << "Test case 9 (Negative numbers subtraction) failed. Expected -2, got " << result9 << std::endl;
    }

    // Test case 10: Additional invalid operator
    float result10 = calculator(7.0, '&', 3.0);
    if (result10 == 1.0) {
        std::cout << "Test case 10 (Additional invalid operator) passed." << std::endl;
    } else {
        std::cout << "Test case 10 (Additional invalid operator) failed. Expected 1, got " << result10 << std::endl;
    }

    // Test case 11: Additional invalid
    float result11 = calculator(7.0, '/', -0.0);
    if (result11 == 1.0) {
        std::cout << "Test case 11 (Additional invalid operator) passed." << std::endl;
    } else {
        std::cout << "Test case 11 (Additional invalid operator) failed. Expected something, got " << result11 << std::endl;
    }

    return 0;
}
