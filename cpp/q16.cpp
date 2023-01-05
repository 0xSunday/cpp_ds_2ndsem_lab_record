/*--------Write a program to show the method of accessing static private member function---------*/
#include <iostream>
using namespace std;

class MyClass
{
private:
  static void privateFunction()
  {
    cout << "\nThis is a private static function" << endl;
  }

  friend void friendFunction();

public:
  static void publicFunction()
  {
    privateFunction();
  }
};

void friendFunction()
{
  MyClass::privateFunction();
}
int main()
{
  MyClass::publicFunction();
  friendFunction();
  cout << "\n\n";
  return 0;
}
