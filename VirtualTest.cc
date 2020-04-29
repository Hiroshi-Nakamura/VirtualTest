#include <iostream>

class Base {
  public:
    virtual ~Base() { std::cout << "~Base()." << std::endl; }
};

class Derived_1 : protected Base {
  public:
    ~Derived_1() { std::cout << "~Derived_1()." << std::endl; }
};

class Derived_2 : public Derived_1 {
  public:
    ~Derived_2() { std::cout << "~Derived_2()." << std::endl; }
};

int main() {
    Derived_1* p = new Derived_2;
    delete p;
}