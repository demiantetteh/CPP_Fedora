#include <iostream>

// lets have this vector(don't worry much about it, we'll get to vectors soon)
#include <vector>

// say we want to give this specific long name(vector) an alias
typedef std::vector<std::pair<std::string, int>> pairlist_t;
// so pairlist_t is now the alias

// You can do so for whatever scope(data type) you want

// the ff lines do the same operations as the typedef keyword
// eg.
using text_t = std::string; // typedef std::string text_t
using number_t = int;       // typedef int number_t
int main()
{
  /**
   * typedef = reserved keyword used to create an additional name
   *           (alias) for another data type
   *           New identifier for an existing type
   *           Helps with readability and reduces typos
   *
   *           Use ONLY when there's a CLEAR BENEFIT
   *           Replaced with 'using' (works better with Templates)
   */

  pairlist_t pairlist;
}
