#include <iostream>
using namespace std;
int main() {
    int X;
    cin >> X;
    int y =  (X / 1000);
    if(y % 2 == 0){
        cout << "EVEN";
    }
    else
        cout << "ODD";
    return 0;
}