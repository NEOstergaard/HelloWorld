#include <iostream>

class HelloWorld {
public:
  void hello(void) {
    std::cout << "Hello world. Nice to meet you." << std::endl;
  }
};

int main(int argc, char* argv[]) {
  HelloWorld world;

  world.hello();
}
