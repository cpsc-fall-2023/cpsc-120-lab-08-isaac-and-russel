// Russel Brown
// erusselbrown@csu.fullerton.edu
// @erusselbrown
// Partners: @Mr1saac

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  if (arguments.size() != 4) {
    std::cout << "error: you must supply three arguments";
    return -1;
  }

  std::string protein{arguments.at(1)};
  std::string bread{arguments.at(2)};
  std::string condiment_input{arguments.at(3)};

  std::cout << "Your order: \n A " << protein << " sandwich on " << bread
            << " with " << condiment_input;
  return 0;
}
