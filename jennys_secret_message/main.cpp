#include <iostream>
#include <string>

std::string greet(std::string name) {
  if(name == "Johnny") {
    return "Hello, my love!";
  } else {
      return "Hello, " + name + "!";
  }
}

int main() {
    std::cout << greet("Jim") << "\n";
    std::cout << greet("James") << "\n";
    std::cout << greet("Chuck") << "\n";
    std::cout << greet("Johnny") << "\n";

    return 0;
}
