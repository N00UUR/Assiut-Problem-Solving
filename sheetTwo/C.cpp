#include <iostream>
using namespace std ;
int main(){
int n;
long long m;
cin>>n;

int even=0, odd=0, positive=0, negative=0;

for(int i=0; i<n;i++){
    cin>>m;
    if(m%2==0){
        even++;
    }else{
        odd++;
    }
    if(m>0){
        positive++;
    }else if(m<0){
        negative++;
    }
}


cout<<"Even: "<<even<<endl;
cout<<"Odd: "<<odd<<endl;
cout<<"Positive: "<<positive<<endl;
cout<<"Negative: "<<negative<<endl;

return 0;
}