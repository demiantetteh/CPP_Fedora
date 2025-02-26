#include <iostream>

int main()
{
    double base, ans, temp;
    int exp, cnt;

    std::cout << "\nEnter the base of the number you'd want to square: ";
    std::cin >> base;

    std::cout << "\nEnter the exponent(integers only) of number you'd want "
                 "to square: ";
    std::cin >> exp;

    temp = base;

    /** dealing with exponents of 0 .... you don't even need this block of code
    if (exp == 0)
    {
        std::cout << base << " to the power of " << exp << " is 1" << std::endl;
    }**/

    // dealing with negative exponents
    if (exp < 0)
    {
        temp = (1 / temp);

        for (cnt = 0; cnt > (exp + 1); cnt--)
        {
            temp *= (1 / base);
        }
    }

    // dealing with the normal stuff
    else
    {
        for (cnt = 0; cnt < (exp - 1); cnt++)
        {
            temp *= base;
        }
    }

    std::cout << base << " to the power of " << exp << " is " << temp
              << std::endl;

    return (0);
}
