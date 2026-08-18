#include <iostream>
using namespace std;

int main()
{
    int num;
    int i = 2;
    bool prime = true;

    cout << "Enter the number : ";
    cin >> num;

    if (num <= 1)
    {
        prime = false;
    }
    else
    {
        while (i <= num - 1)
        {
            if (num % i == 0)
            {
                prime = false;
                break;
            }

            i++;
        }
    }

    if (prime)
    {
        cout << "Prime.";
    }
    else
    {
        cout << "Not prime.";
    }

    return 0;
}