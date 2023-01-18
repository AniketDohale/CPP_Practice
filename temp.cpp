#include <iostream>
using namespace std;

int main()
{
    int a;
    short int c;
    long int d;
    long long int e;
    double f;
    long double g;
    // cout << "Enter Number -> ";
    // cin >> a;
    // cout << "Enter Number -> ";
    // cin >> b;

    // cout << "The Addition -> " << a + b << endl;

    cout << "Size (int) -> " << sizeof(a) << " Bytes" << endl;
    cout << "Size (short int) -> " << sizeof(c) << " Bytes" << endl;
    cout << "Size (long int) -> " << sizeof(d) << " Bytes" << endl;
    cout << "Size (long long int) -> " << sizeof(e) << " Bytes" << endl;
    cout << "Size (double) -> " << sizeof(f) << " Bytes" << endl;
    cout << "Size (long double) -> " << sizeof(g) << " Bytes" << endl;
}