#include <iostream>
using namespace std;

int main()
{
    int a = 0;
    int b = 1;
    int temp;
    int number;

    cout << "Enter the Number : ";
    cin >> number;
    cout << endl;

    cout << a << " " << b << " ";

    for (int i = 2; i < number; i++)
    {
        temp = a + b;
        cout << temp << " ";
        a = b;
        b = temp;
    }
    return 0;
}