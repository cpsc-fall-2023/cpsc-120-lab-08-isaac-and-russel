// Russel Brown
// erusselbrown@csu.fullerton.edu
// @erusselbrown
// Partners: @Mr1saac

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments(argv + 1, argv + argc);

  if (arguments.empty()) {
    std::cerr << "Error: Please provide at least one command line argument."
              << std::endl;
    return 1;
  }

  double sum = 0;
  for (size_t i = 0; i < arguments.size(); i++) {
    sum += std::stod(arguments[i]);
  }

  double average = sum / static_cast<double>(arguments.size());

  std::cout << "average = " << average << std::endl;

  return 0;
}