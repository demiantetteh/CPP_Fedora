#include <iostream>

int main()
{

    std::cout << "*************************************************************"
                 "*************\n"
              << "This is an Artificial sweetner gram calculator\n"
              << "To find least sweetner needed to kill a human of a specific "
                 "weight\n"
              << "*************************************************************"
                 "*************\n\n";

    // g_pop is the mass of soda per can
    const int G_POP = 350;
    const double POP_SWEETNER = 0.001;

    double kill_mouse, m_mouse, m_person;

    std::cout << "\nPlease enter all masses in grams\n" << std::endl;

    std::cout << "\nEnter the mass of the mouse: ";
    std::cin >> m_mouse;

    std::cout << "\nEnter the mass of the Artificial sweetner required to kill "
                 "the mouse: ";
    std::cin >> kill_mouse;

    std::cout << "\nEnter the (current) weight of the person: ";
    std::cin >> m_person;

    // calculations
}
