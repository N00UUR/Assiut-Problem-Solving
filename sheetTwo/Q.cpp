#include <iostream>
using namespace std;

int main() {
    int T, N;
    cin >> T;

    while (T--) {
        cin >> N;
    if (N == 0) {
        cout << 0 << endl;
        continue; 
        }
    int num = N ;

        while( num > 0){

        int digit = num % 10 ;
        cout << digit << " ";
        num = num / 10 ;

        }

        cout << endl;
    }
    

    
    return 0;
}