#include <iostream>
using namespace std;
int main()
{
  float num;
  cout << "enter the number :";
  cin>>num;
  float ANS;
  ANS = num * (num + 1) / 2;
  cout << "Sum of Natural Number is : " << ANS;
  return 0;
}