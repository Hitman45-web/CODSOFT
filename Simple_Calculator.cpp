// CodSoft Internship
// Domain Name - C++ Programming
// Task - 2(Simple Calculator)
// Intern Name -Yash Dighade
#include <iostream>

int main() {
    double num1, num2;
    char op;

    std::cout << "Enter first number: ";
    std::cin >> num1;

    std::cout << "Enter second number: ";
    std::cin >> num2;

    std::cout << "Choose an operation (+, -, *, /): ";
    std::cin >> op;

    switch (op) {
        case '+':
            std::cout << "Result: " << num1 + num2 << std::endl;
            break;
        case '-':
            std::cout << "Result: " << num1 - num2 << std::endl;
            break;
        case '*':
            std::cout << "Result: " << num1 * num2 << std::endl;
            break;
        case '/':
            if (num2 != 0) {
                std::cout << "Result: " << num1 / num2 << std::endl;
            } else {
                std::cout << "Error: Division by zero." << std::endl;
            }
            break;
        default:
            std::cout << "Invalid operation." << std::endl;
    }

    return 0;
}
