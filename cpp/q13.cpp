/*------------Write a program to find sum of four numbers using default argument passing in member function.----------------*/
#include <iostream>
using namespace std;

class FourNumbers
{
public:
    int sum(int a = 10, int b = 15, int c = 30, int d = 50)
    {
        return a + b + c + d;
    }
};

int main()
{
    FourNumbers number;
    cout << "\nSum: " << number.sum(10,20,30) << "\n\n";
    return 0;
}
