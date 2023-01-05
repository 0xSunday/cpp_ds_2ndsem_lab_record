// Write a program to perform ++ operator overloading using friend function. 

#include <iostream>

class MyClass {
 private:
  int value;

 public:
  MyClass(int val) : value(val) {}

  
  friend MyClass& operator++(MyClass& obj);

  int getValue() const { return value; }
};

MyClass& operator++(MyClass& obj) {
  ++obj.value;
  return obj;
}

int main() {
  MyClass obj(5);
  std::cout << obj.getValue() << std::endl; 

  ++obj;
  std::cout << obj.getValue() << std::endl;  

  return 0;
}
