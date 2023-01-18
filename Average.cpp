#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cout << "Enter the x -> ";
    cin >> x;
    cout << "Enter the y -> ";
    cin >> y;
    int sum = x + y;
    int avg = sum / 2;

    cout << "The Average -> " << avg;

    return 0;
}