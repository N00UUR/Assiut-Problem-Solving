#include <iostream>
using namespace std ;
int main(){

int N;
cin>>N;

if(N>1){
for( int i = 2 ; i <= N;){
    
    cout<< i <<endl;
    i+=2;
    
}
}

else{
    cout<<"-1"<<endl;
}
return 0;
}