/*--------Write a Program to check a number is prime or not.----------*/
#include <iostream>
using namespace std;
int main()
{
    int number, div, count = 0;
    cout << "\n\nEnter any number :";
    cin >> number;

    if (number == 0 || number == 1)
    {
        cout << "1 or 0 is neither prime nor composite.\n";
    }
    else
    {
        for (int i = 1; i <= number / 2; i++)
        {
            if (number % i == 0)
            {
                count++;
            }
        }
        cout << "\n";
        if (count == 2)
        {
            cout << number << " is a prime number.\n\n";
        }
        else
        {
            cout << number << " is not a prime number.\n\n";
        }
    }

    return 0;
}