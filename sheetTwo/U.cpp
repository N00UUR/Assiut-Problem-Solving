#include <iostream>
#include<cmath>
using namespace std;

int main() {
int N,A,B;
cin >> N >> A >> B;

    long long sumTotal=0;
for(int i = 1; i <= N; i++){
    int num = i;
    int sumDigits = 0;
    while (num > 0)
    {
        
        int digit = num % 10;

        sumDigits += digit;

        num = num / 10;
    }
    if (sumDigits >= A && sumDigits <= B )
    {
        sumTotal += i;
    }
    
}
cout << sumTotal ;
    return 0;

}