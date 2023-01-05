/*------Write a Program to find reverse of a number.-------*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    int rem = 0, reverse = 0;
    cout << "\n\nPrinting a number in its reverse order :- \n";
    cout << "---------------------------------------------\n\n";
    cout << "Enter a number :- ";
    cin >> n;
    while (n != 0)
    {
        rem = n % 10;
        reverse = reverse * 10 + rem;
        n = n / 10;
    }
    cout << "\nReversed number is :- " << reverse << "\n\n";
    return 0;
}