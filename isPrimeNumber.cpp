#include <iostream>
using namespace std;

int main()
{
    int n;
    int m = 0;
    int flag = 0;

    cout << "Enter the Number :" << endl;
    cin >> n;

    m = n / 2;

    for (int i = 2; i < m; i++)
    {
        if (n % i == 0)
        {
            cout << "Number is not a Prime Number";
            flag = 1;
            break;
        }
    }

    if (flag == 0)
    {
        cout << "Number is Prime Number";
    }

    return 0;
}