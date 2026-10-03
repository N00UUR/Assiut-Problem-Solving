#include <iostream>
using namespace std;
int main() {
    char A;
    cin >> A;
    if(A >= 65 && A <= 90)
    cout << (char)(A+32);
    else if(A >= 97 && A <= 122)
    cout << (char)(A-32);
    return 0;
}