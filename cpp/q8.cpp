/*----Write a Program for Swapping of two numbers using pass by reference--------*/
#include <iostream>
using namespace std;
void swap(int &, int &);
int main()
{
    int a, b;
    cout << "\n\nEnter the Value of A :- ";
    cin >> a;
    cout << "Enter the value of B :- ";
    cin >> b;
    cout << "\nBefore Swapping A = " << a << ", B = " << b;
    swap(a, b);
    cout << "\n\nAfter Swapping A = " << a << ", B = " << b << "\n\n";
    return 0;
}
void swap(int &x, int &y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}