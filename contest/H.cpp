#include <iostream>
using namespace std;
int main() {
long long n, k , a;
cin >> n >> k >> a;
if (n*k % a != 0) {
    cout <<"double" << endl;
      }
       else if (n*k / a >2147483647 || n*k / a < -2147483647) {
        cout << "long long" << endl;
    }
        else {
            cout << "int" << endl;
        }
  
    return 0;
}