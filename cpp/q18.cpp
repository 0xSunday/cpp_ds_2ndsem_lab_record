// . Write a program to perform ++ operator overloading using member function.

#include <iostream>

class MyClass
{
private:
  int value;

public:
  MyClass(int val) : value(val) {}

  MyClass &operator++()
  {
    ++value;
    return *this;
  }

  int getValue() const { return value; }
};

int main()
{
  MyClass obj(5);
  std::cout << obj.getValue() << std::endl;

  ++obj;
  std::cout << obj.getValue() << std::endl;

  return 0;
}
