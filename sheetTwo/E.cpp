#include <iostream>
#include <cmath>

using namespace std ;
int main(){
int N;
cin >> N ;
int  MAX = 0;
for(int i = 0; i < N; i++){
    int X; 
        cin >> X;
    if(X > MAX){
        MAX = X;
    }
}

cout << MAX << endl;

return 0;
}