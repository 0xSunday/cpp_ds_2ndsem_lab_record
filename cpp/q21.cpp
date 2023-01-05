// Write a program to perform + operator overloading for string concatenation.

#include <iostream>
#include <string>

class String
{
private:
  std::string str;

public:
  String(const std::string &s) : str(s) {}

  String operator+(const String &other) const
  {
    return String(str + other.str);
  }

  const std::string &getString() const { return str; }
};

int main()
{
  String s1("Hello, ");
  String s2("world!");

  String s3 = s1 + s2;

  std::cout << s3.getString() << std::endl;

  return 0;
}
