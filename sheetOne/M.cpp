#include <iostream>
using namespace std;

int main() {
char X ;
    cin >> X;
if(X >= 48 && X <= 57)
    cout << "IS DIGIT";
else
    cout << "ALPHA"<<endl;

if(X >= 65 && X <= 90)
    cout << "IS CAPITAL";
else if(X >= 97 && X <= 122)
    cout << "IS SMALL";
return 0;
}