// CodSoft Internship
// Domain Name - C++ Programming
// Task - 4(Word Count)
// Intern Name -Yash Dighade
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

int main() {
    std::string filename;
    std::cout << "Enter the file name: ";
    std::cin >> filename;

    std::ifstream file(filename);
    std::string word;
    int count = 0;
    
    while (file >> word) {
        count++;
    }

    std::cout << "Total word count: " << count << std::endl;

    return 0;
}