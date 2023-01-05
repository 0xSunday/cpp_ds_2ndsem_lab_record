
// Write a program to implement virtual destructor. 

#include <iostream>

class Base {
 public:
  // Declare the destructor as virtual
  virtual ~Base() {}
};

class Derived : public Base {
 private:
  int* data;

 public:
  Derived(int size) { data = new int[size]; }
  ~Derived() { delete[] data; }
};

int main() {
  Base* b = new Derived(10);
  delete b;  // Calls the destructor of Derived

  return 0;
}
