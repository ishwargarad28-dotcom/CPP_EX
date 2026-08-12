#include <iostream>
using namespace std;
int main()
{
  int n, original, rev = 0;
  cout << "enter the number :";
  cin >> n;
  original = n;
  while (n > 0)
  {
    rev = rev * 10 + n % 10;
    n /= 10;
  }
  if (original == rev)
  {
    cout << "palindrome : " << rev;
  }
  else
  {
    cout << "Not palindrome";
  }
  return 0;
}