#include <iostream>

class HelloWorld {
public:
  void hello(void) {
    std::cout << "Hello world" << std::endl;
  }
};

int main(int argc, char* argv[]) {
  HelloWorld world;

  world.hello();
}
