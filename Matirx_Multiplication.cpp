#include <iostream>

using namespace std;
int main()
{
    int a[10][10];
    int b[10][10];
    int mul[10][10];
    int row, column;

    cout << "Enter the Number of Rows -> ";
    cin >> row;
    cout << "Enter the Number of Columns -> ";
    cin >> column;

    cout << "Enter Values for First Matrix -> ";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cin >> a[i][j];
        }
    }

    // cout << "The First Matrix -> " << endl;
    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < column; j++)
    //     {
    //         cout << a[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    cout << "Enter the Values for Second Matrix -> ";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cin >> b[i][j];
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            mul[i][j] = 0;
            for (int k = 0; k < column; k++)
            {
                mul[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    cout << "The Result -> " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout << mul[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}