#include <iostream>
#include<cmath>
using namespace std;

int main() {
    int N,M;

while (cin >> N >> M) {


    if( N <=0 || M <=0 ){
    break;
}

int Max = max(N,M);
int Min = min(N,M);
long long sum = 0;

for(int i = Min ; i <= Max ; i++){
    cout << i << " ";
    sum += i;

}
    cout << " sum =" << sum << endl;

        }
    return 0;
}