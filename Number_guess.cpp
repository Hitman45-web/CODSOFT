// CodSoft Internship
// Domain Name - C++ Programming
// Task - 1(Student Grading System)
// Intern Name -Yash Dighade
#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(static_cast<unsigned int>(time(0)));
    int secretNumber = rand() % 100 + 1;
    int guess = 0;

    std::cout << "Guess a number between 1 and 100:\n";

    while (guess != secretNumber) {
        std::cout << "Enter your guess: ";
        std::cin >> guess;

        if (guess > secretNumber) {
            std::cout << "Too high! Try again.\n";
        } else if (guess < secretNumber) {
            std::cout << "Too low! Try again.\n";
        }
    }

    std::cout << "Congratulations! You guessed the correct number.\n";
    return 0;
}v
