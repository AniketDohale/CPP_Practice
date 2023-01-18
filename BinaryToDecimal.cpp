#include <iostream>
using namespace std;

int main()
{
    int n;
    int i;
    int a[10];
    cout << "Enter The Number -> ";
    cin >> n;

    for (i = 0; n > 0; i++)
    {
        a[i] = n % 2;
        n = n / 2;
    }
    cout << "Binary -> ";
    for (i = i - 1; i >= 0; i--)
    {
        cout << a[i];
    }
}