#include <iostream>
using namespace std;
int main() {

    int N;
    cin >> N;

int turn = N;

    for (int i = turn; i >= 1; i--) {


            for (int j = 1; j <= i; j++) {
            cout << "*" ;
                }


        cout << endl;
    }

    return 0;
}