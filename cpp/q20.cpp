// Write a program to perform + operator overloading for two complex number addition. 

#include <iostream>

class Complex {
 private:
  double real;
  double imag;

 public:
  Complex(double r = 0, double i = 0) : real(r), imag(i) {}

  Complex operator+(const Complex& other) const {
    return Complex(real + other.real, imag + other.imag);
  }

  double getReal() const { return real; }
  double getImag() const { return imag; }
};

int main() {
  Complex c1(1, 2);
  Complex c2(3, 4);

  Complex c3 = c1 + c2;

  std::cout << c3.getReal() << " + " << c3.getImag() << "i" << std::endl;

  return 0;
}
