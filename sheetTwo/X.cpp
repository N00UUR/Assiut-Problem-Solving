#include <iostream>
#include <cmath>
using namespace std;
int main()
{

    int T;
    long long N;
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        int countOne = 0;
        int countZero = 0;
        cin >> N;

        long long num = N;

        while (num > 0)
        {
            if (num % 2 == 0)
                countZero = countZero + 1;

            else
                countOne = countOne + 1;

            num = num / 2;
        }

        int res = 0;
        for (int j = 0; j < countOne; j++)
        {

            res +=  pow(2,j) ;
        }

        cout << res << endl;
    }
}