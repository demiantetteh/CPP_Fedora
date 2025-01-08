#include <iostream>

int main()
{
    int nickels, quarters, dimes;
    int n_cents, q_cents, d_cents;
    int total_cents;

    std::cout << "Enter the number of Nickels you have: ";
    std::cin >> nickels;

    std::cout << "Enter the number of Quarters you have: ";
    std::cin >> quarters;

    std::cout << "Enter the number of Dimes you have: ";
    std::cin >> dimes;

    // conversion
    q_cents = quarters * 25;
    d_cents = dimes * 10;
    n_cents = nickels * 5;

    total_cents = q_cents + d_cents + n_cents;

    std::cout << "\n\nYou have " << total_cents << " cents in total"
              << std::endl;

    return (0);
}
