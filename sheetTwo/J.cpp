#include <iostream>

using namespace std ;
int main(){
int N;
cin >> N;

for(int i = 2; i <=N; i++){
    int j;
    for( j = 2; j < i; j++){


        if(i % j == 0){
            break;
        }
    }

if(j == i){
    cout << i << " ";
}
}

return 0;
}