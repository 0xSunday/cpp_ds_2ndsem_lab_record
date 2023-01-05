/*-----6. Write a Program for Swapping of two numbers using pass by value.-----*/
#include <iostream>
using namespace std;
void swap(int, int);

int main()
{
    int num1, num2;
    cout << "\n\nEnter the value of num1 :- ";
    cin >> num1;
    cout << "\nEnter the value of num2 :- ";
    cin >> num2;

    cout << "\nBefore Swapping num1 = " << num1 << ", num2 = " << num2;
    swap(num1, num2);
    return 0;
}

void swap(int num1, int num2)
{
    int temp;
    temp = num1;
    num1 = num2;
    num2 = temp;

    cout << "\n\nAfter Swapping num1 = " << num1 << ", num2 = " << num2 << "\n\n";
}
