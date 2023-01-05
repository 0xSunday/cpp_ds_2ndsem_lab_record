// . Write a Program to find sum of four numbers using default argument passing. 

#include <iostream>
using namespace std;
int sum(int x, int y, int z = 15, int w = 35)
{
  return (x + y + z + w);
  {
    cout << sum(10, 15) << endl;
    cout << sum(10, 15, 25) << endl;
    cout << sum(10, 15, 25, 30) << endl;
    return 0;
  }