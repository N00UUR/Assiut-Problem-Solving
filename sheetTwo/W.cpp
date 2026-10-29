#include <iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;

    for (int i = 1; i <= N; i++)
    {
        for (int q = 1; q <= N - i; q++)
        {
            cout << " ";
        }

        for (int k = 1; k < i * 2; k++)
        {
            cout << "*";
        }

        cout << endl;
    }

    for (int j = 1; j <= N; j++)
    {
        for (int r = 1; r < j; r++)
        {
            cout << " ";
        }
        int num = N;
        for (int l = 1; l < 2 * (N - j + 1); l++)
        {
            cout << "*";
        }

        cout << endl;
    }
}