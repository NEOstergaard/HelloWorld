#include <iostream>

// Main class
class HelloWorld {
public:

  void hello_world(void) {
    std::cout << "Hello world. Nice to meet you." << std::endl;
  }

  void hello_denmark(void) {
    std::cout << "Hello Denmark." << std::endl;
  }

  void hello_sweeden(void) {
    std::cout << "Hello Sweeden. Just got home from a trip to Sweeden." << std::endl;
  }

};

// Start the program
int main(int argc, char* argv[]) {
  HelloWorld world;

  world.hello_world();
  world.hello_denmark();
  world.hello_sweeden();
}
