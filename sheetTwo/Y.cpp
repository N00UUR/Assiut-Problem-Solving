#include <iostream>
using namespace std;
int main()
{

    int N;
    cin >> N;
    int first = 0;
    int sec = 1;

    for (int i = 1; i <= N; i++)
    {
        if (i == 1)
            cout << "0"<< " ";
        else if (i == 2)
        {
            cout << "1"<< " ";
        }
        else
        {
            int next = first + sec;

            cout << next << " ";

            first = sec;
            sec = next;
        }
    }
}