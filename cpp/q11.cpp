/*--------Write a Program to find the factorial of a number.-------*/

#include <iostream>
using namespace std;
int main()
{
	int i, number, fact = 1;
	cout << "\nFinding factorial of any number :- \n";
	cout << "------------------------------------\n";
	cout << "\nEnter a number :- ";
	cin >> number;
	for (int i = 1; i <= number; i++)
	{
		fact = fact * i;
	}
	cout << "\nThe factorial of the " << number << " is : " << fact << "\n\n";
}
