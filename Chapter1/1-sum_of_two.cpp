#include <iostream>

int main()
{
    int first, second;
    int sum, prod;

    std::cout << "Enter your first favourite number and hit the the return key"
              << std::endl;
    std::cin >> first;

    std::cout << "Enter your second favourite number and hit the return key"
              << std::endl;
    std::cin >> second;

    sum = first + second;
    prod = first * second;

    std::cout << "The sum is " << sum << std::endl;
    std::cout << "Theh product is " << prod << std::endl;

    std::cout << "\nThis is the end of the program" << std::endl;

    return (0);
}
