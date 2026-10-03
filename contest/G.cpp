#include <iostream>
#include <cmath>
using namespace std;
int main() {
long long n, m , k;
cin >> n >> m >> k;

long long  count = 0;
if (n > 0 && m > 0 && k > 0 ) {
    long long Min = min(k , min(n, m));
n-= Min;
m-= Min;
k-= Min;
count += Min;
}
count += min(n / 2, k);

cout << count ;
    return 0;
}