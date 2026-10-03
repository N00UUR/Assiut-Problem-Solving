#include  <iostream>
#include <algorithm>
using namespace std;
int main() {
    
int l1,r1, l2,r2;
    cin >> l1 >> r1 >> l2 >> r2;
 int M = max(l1,l2);
 int N = min(r1,r2);
 if(M <= N)
    cout << M << " " << N;
 else
    cout << "-1";

return 0;
}