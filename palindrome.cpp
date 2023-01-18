#include <iostream>
using namespace std;

int main()
{
    int n, temp, r, sum = 0;

    cout << "Enter the Number : ";
    cin >> n;

    temp = n;
    while (n > 0)
    {
        cout << "---------------" << endl;
        r = n % 10;
        cout << r << endl;
        sum = (sum * 10) + r;
        cout << sum << endl;
        n = n / 10;
        cout << n << endl;
        cout << "---------------" << endl;
    }

    if (temp == sum)
    {
        cout << "Palindrome Number";
    }
    else
    {
        cout << "Not Palindrome Number";
    }
    return 0;
}