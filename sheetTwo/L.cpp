#include <iostream>
#include <algorithm>
using namespace std;
int main() {
int  A, B;
cin >> A >> B;
int MIN = min(A, B);
for (int i = MIN; i >= 1; i--) {
 int max = i;
    if (A % i == 0 && B % i == 0) {
     cout << max << endl; 
     break;
    }
     
}
    return 0;
}