#include <iostream>
#include <cmath>
using namespace std ;
int main(){
    double A,B ;
    cin>>A>>B;
    double C = A/ B ;
cout<<"floor "<<A<<" / "<<B<<" = "<<floor(C)<<endl;
cout<<"ceil "<<A<<" / "<<B<<" = "<<ceil(C)<<endl;
cout<<"round "<<A<<" / "<<B<<" = "<<round(C)<<endl;
}