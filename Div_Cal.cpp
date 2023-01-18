#include <iostream>
using namespace std;

int main()
{
    int divisor;
    int divident;

    cout << "Divisor -> ";
    cin >> divisor;
    cout << "Divident -> ";
    cin >> divident;

    float quotient = (float)divident / divisor;

    cout << "Quotient -> " << quotient << endl;

    float remainder = divident % divisor;

    cout << "Remainder -> " << remainder;

    return 0;
}