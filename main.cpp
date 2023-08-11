#include <iostream>
int main() {
  std::cout << "Enter your name:" << std::endl;
  std::string name;
  std::getline(std::cin, name);
  std::cout << "Hello, " << name << "!\n";
  return 0;
}