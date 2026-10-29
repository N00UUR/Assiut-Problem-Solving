#include <iostream>
#include<cmath>
using namespace std;

int main() {
int T , X , Y;
cin >> T ;
while (T--)
{
cin >> X >> Y ;

int Max = max(X,Y);
int Min = min(X,Y);
int sum = 0;
for(int i = Min + 1 ; i < Max ; i++){

if(i % 2 != 0){
sum += i;  
}

}
cout << sum << endl;

}

    return 0;
}