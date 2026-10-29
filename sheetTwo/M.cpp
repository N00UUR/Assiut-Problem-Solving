#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    int MIN = min(A, B);
    int MAX = max(A, B);

    bool foundAny = false;

    for (int i = MIN; i <= MAX; i++) {
        
        int num = i; 
        
        bool isLucky = true;

        while (num > 0) {
            int digit = num % 10;
            
            if (digit != 4 && digit != 7) {
                isLucky = false; 
                break;
            }
            
            num /= 10; 
        }

        if (isLucky == true) {
            cout << i << " "; 
            foundAny = true; 
        }
    }

    if (foundAny == false) {
        cout << -1 << endl;
    }

    return 0;
}