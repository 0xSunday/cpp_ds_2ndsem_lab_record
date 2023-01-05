/*------Write a Program to find square and cube of a number using inline function.------*/
#include <iostream>
using namespace std;
int square(int);
int cube(int);

int main()
{
    int number;
    int sqr, cb;
    cout << "\n\nEnter a number :- ";
    cin >> number;
    sqr = square(number);
    cb = cube(number);
    cout << "\nThe Square of " << number << " is = " << sqr;
    cout << "\n\nThe Cube of " << number << " is = " << cb << "\n\n";
    return 0;
}
inline int square(int num)
{
    return num * num;
}
inline int cube(int num)
{
    return num * num * num;
}
