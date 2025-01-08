#include <iostream>

int main()
{
    // gravity(m/s^2) = gravitational constant on earth
    double distance, gravity, time;

    gravity = 9.8;

    std::cout << "Enter the time for freefall travel: ";
    std::cin >> time;

    // conversion

    distance = (gravity * (time * time)) / 2;

    std::cout << "\n\n The distance travelled by the object in freefall is "
              << distance << " metre(s)" << std::endl;

    return (0);
}
