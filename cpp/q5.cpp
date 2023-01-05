/*--------------Write a program to print multiplication table from 1 to 10.-------------------*/
#include <iostream>
using namespace std;
int main()
{
    cout << "\n";
    for (int i = 1; i <= 10; i++)
    {
        cout << "Multiplication table for " << i << "\n\n";
        for (int j = 1; j <= 1; j++)
        {
            for (int k = 1; k <= 10; k++)
            {
                cout << i * k << "\t";
            }
            cout << "\n";
            for (int k = 1; k <= 10; k++)
            {
                cout << k << "\t";
            }
            cout << "\n";

            for (int k = 1; k <= 10; k++)
            {
                cout << i << "\t";
            }
            cout << "\n";
        }
        cout << "\n";
    }
}