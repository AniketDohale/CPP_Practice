#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the Number (a) -> ";
    cin >> n;

    int m;
    cout << "Enter the Number (b) -> ";
    cin >> m;

    // ------------------------------------------------------------------------------------------------------

    // Using a Third Variable...
    // int temp = n;
    // n = m;
    // m = temp;
    // cout << "The (a) -> " << n;
    // cout << endl;
    // cout << "The (b) -> " << m;

    // ------------------------------------------------------------------------------------------------------

    // Without Using a Third Variable... ( Using * and / )

    // n = n * m;
    // m = n / m;
    // n = n / m;

    // cout << "The (a) -> " << n;
    // cout << endl;
    // cout << "The (b) -> " << m;

    // ------------------------------------------------------------------------------------------------------

    // Without Using a Third Variable... ( Using + and - )

    // n = n + m;
    // m = n - m;
    // n = n - m;

    // cout << "The (a) -> " << n << endl
    //      << "The (b) -> " << m;

    // ------------------------------------------------------------------------------------------------------

    // Using a Swap Function....
    // swap(n, m);
    // cout << "The (a) -> " << n << endl
    //      << "The (b) -> " << m;

    // ------------------------------------------------------------------------------------------------------

    // Simple and Improved...
    m = n - m + (n = m);
    cout << "The (a) -> " << n << endl
         << "The (b) -> " << m;

    return 0;
}