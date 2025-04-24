#include <ctime>
#include <iostream>

int main()
{
  // pseudo-random = NOT truly random (but close)

  srand(time(NULL));

  // int num = (rand() % 6) + 1;  //so you get numbers from (0 through 5 + 1)

  int num1 = (rand() % 6) + 1;
  int num2 = (rand() % 6) + 1;
  int num3 = (rand() % 6) + 1;

  std::cout << num1 << '\n';
  std::cout << num2 << '\n';
  std::cout << num3 << '\n';

  return (0);
}
