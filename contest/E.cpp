#include <iostream>
using namespace std;
int main() {
int a, b;
cin >> a >> b;
if((a+b)>1){
    if(a == b || a == b + 1 || a + 1 == b)
    cout << "YES" << endl;
    else
    cout << "NO" << endl;
}
else
cout << "NO" << endl;
return 0;
}