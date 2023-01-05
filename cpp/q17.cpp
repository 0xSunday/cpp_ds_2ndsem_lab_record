/*--------Write a program to show the ways of calling constructors and destructors-------*/
#include <iostream>
#include <new>
using namespace std;

class MyClass
{
public:
  MyClass()
  {
    cout << "Constructor called" << endl;
  }

  ~MyClass()
  {
    cout << "Destructor called" << endl;
  }
};

int main()
{
  cout << "\n";
  MyClass obj1;
  MyClass *obj2 = new MyClass();

  char memory[sizeof(MyClass)];
  MyClass *obj3 = new (memory) MyClass();

  cout << "\n";
  delete obj2;
  obj3->~MyClass();

  return 0;
}
