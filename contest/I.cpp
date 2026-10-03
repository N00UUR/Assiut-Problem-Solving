#include <iostream>
using namespace std;
int main() {
int N;
cin >> N;
int first = N%10;
int second = (N/10)%10;
if (first == 0) {
        cout << "YES\n";
    }
else if(second % first == 0 || first % second == 0){
    cout << "YES" << endl;
}
else{
    cout << "NO" << endl;
}
    return 0;
}