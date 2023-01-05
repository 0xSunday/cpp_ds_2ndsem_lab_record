/*-----------Write a Program to find greatest among three numbers using nested if...else
statement.-------*/
#include <iostream>
using namespace std;
int main()
{
    int num, largest = 0;
    cout << "\nEnter any three numbers :- \n";
    for (int i = 0; i < 3; i++)
    {
        cin >> num;
        if (num > largest)
        {
            largest = num;
        }
    }
    cout << "\n";
    cout << largest << " is the largest number\n\n";
}
