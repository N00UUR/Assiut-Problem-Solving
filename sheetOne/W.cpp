#include <iostream>
using namespace std;
int main() {
int A , B , C;
char S , Q;
    cin >> A >> S >> B >> Q >> C;
    if (S == '+' && A + B == C){
        cout << "Yes";
    }
    else if (S == '+' && A + B != C){
        cout << (A + B);
    }
    else if (S == '-' && A - B == C){
        cout << "Yes";
    }
    else if (S == '-' && A - B != C){
        cout << (A - B);
    }
    else if (S == '*' && A * B == C){
        cout << "Yes";
    }
    else if (S == '*' && A * B != C){
        cout << (A * B);
    }
    return 0;
}