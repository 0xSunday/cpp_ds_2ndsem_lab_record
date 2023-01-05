/*--------Write a program to print the result for following series: 1! + 2! + 3! + N! ......-------*/

#include <iostream>
using namespace std;
int factorial(int);
int main()
{
    int i, n, fact;
    int sum = 0;
    cout << "\nPrinting series: 1! + 2! + 3! + N! :- \n";
    cout << "------------------------------------\n";
    cout << "\nEnter the value of N :- ";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        fact = factorial(i);

        sum += fact;
    }

    cout << "\nThe sum of the series is " << sum << "\n\n";
}

int factorial(int number)
{
    int fact = 1;
    for (int i = 1; i <= number; i++)
    {
        fact = fact * i;
    }
    return fact;
}
