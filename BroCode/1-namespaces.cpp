#include <iostream>

/**
 * Namespace = provides a solution for preventing name conflicts
 *             in large projects. Each entity needs a unique name.
 *             A namespace allows for identically named entities
 *             as long as the namespaces are DIFFERENT
 */

namespace first
{
int x = 3;
}

namespace second
{
int x = 4;
}

int main()
{

  using namespace first;
  /**
   * when you use this, it determines the namespace
   * for whatever variable you have used
   * should you want to use a different
   * namespace you'll have to still use the scope operator
   */

  /**
   * using namespace std has a high likelihood of naming conflicts
   * should you want to save extra typing , USE the ff instead
   * using std::cin
   * using std::cout
   * using std::string
   * using std::endl
   *
   * and that'll cut down the typing at the very least
   */
  int x = 0;

  std::cout << second::x << std::endl;

  return (0);
}
