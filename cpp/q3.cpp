/*-----------Write a Program to find the GCD and LCM of two numbers.-------------*/
#include <iostream>
using namespace std;
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    if (b == 0)
        return a;

    return gcd(b, a % b);
}

int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}

int main()
{
    int a, b;
    cout << "\nEnter the first value :- ";
    cin >> a;
    cout << "\nEnter the second value :- ";
    cin >> b;

    cout << "\nGCD: " << gcd(a, b) << endl;
    cout << "LCM: " << lcm(a, b) << "\n\n";

    return 0;
}
