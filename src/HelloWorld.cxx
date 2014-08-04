#include <iostream>

class HelloWorld {
public:

  void hello_world(void) {
    std::cout << "Hello world. Nice to meet you." << std::endl;
  }

  void hello_denmark(void) {
    std::cout << "Hello Denmark." << std::endl;
  }

};

int main(int argc, char* argv[]) {
  HelloWorld world;

  world.hello_world();
  world.hello_denmark();
}
