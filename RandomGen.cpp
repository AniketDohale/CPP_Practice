#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int low_n, upp_n;
    cout << "Enter the Lower Range of Number -> ";
    cin >> low_n;

    cout << "Enter the Upper Range of Number -> ";
    cin >> upp_n;

    srand(time(NULL));
    cout << "The Random Number between " << low_n << " and " << upp_n << " -> ";
    cout << low_n + rand() % static_cast<int>(upp_n - low_n + 1) << endl;

    return 0;
}
