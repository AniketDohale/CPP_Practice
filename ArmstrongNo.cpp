#include <iostream>
using namespace std;

int main()
{
    int n;
    int r;
    int sum = 0;
    int temp;
    cout << "Enter the Number -> ";
    cin >> n;

    temp = n;
    while (n > 0)
    {
        r = n % 10;
        sum = sum + (r * r * r);
        n = n / 10;
    }
    cout << "Sum -> " << sum << endl;
    if (temp == sum)
    {
        cout << "Armstrong Number" << endl;
    }
    else
    {
        cout << "Not Armstrong Number" << endl;
    }

    return 0;
}