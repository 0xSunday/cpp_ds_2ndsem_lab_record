/*-----------Write a Program to find area of circle, triangle and rectangle using function overloading.-------------*/
#include <iostream>
#include <cmath>
using namespace std;

double area(double radius)
{
  return M_PI * radius * radius;
}

double area(double base, double height)
{
  return 0.5 * base * height;
}

double area(double length, float width)
{
  return length * width;
}

int main()
{
  double r, b, h, l;
  float w;
  cout << "\n\nEnter radius of circle: ";
  cin >> r;
  cout << "Area of circle: " << area(r) << "\n\n";

  cout << "Enter base and height of triangle: \n";
  cin >> b >> h;
  cout << "Area of triangle: " << area(b, h) << "\n\n";

  cout << "Enter length and width of rectangle: \n";
  cin >> l >> w;
  cout << "Area of rectangle: " << area(l, w) << "\n\n";

  return 0;
}
