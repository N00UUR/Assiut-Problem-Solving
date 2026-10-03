#include <iostream>
using namespace std;
int main() {
    long long A , B , C , D;
    cin >> A >> B >> C >> D;
    long long M =( A% 100) * (B% 100)*(C% 100)*(D% 100);

    if(M % 100 < 10){
        cout << "0" << M % 100;
    }
    else{
        cout << M % 100;
    }
    return 0;
}