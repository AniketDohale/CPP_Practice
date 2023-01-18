#include <iostream>
using namespace std;

int cal_lcm(int x, int y)
{
    int greater;
    int lcm;
    if (x > y)
    {
        greater = x;
    }
    else
    {
        greater = y;
    }
    while (true)
    {
        if ((greater % x == 0) && (greater % y == 0))
        {
            lcm = greater;
            break;
        }
        greater = greater + 1;
    }
    return lcm;
}

int main()
{
    int x, y;
    cout << "Enter the First Number -> ";
    cin >> x;

    cout << "Enter the Second Number -> ";
    cin >> y;

    cout << "The LCM of " << x << " and LCM of " << y << " -> " << cal_lcm(x, y);
}