#include <iostream>

using namespace std ;
int main(){
int N ;
cin >> N ;

// Palindrome
int original = N ;
int reversed = 0 ;
while(N > 0){
    reversed = reversed * 10 + N % 10 ;
    N /= 10 ;
}
if(original == reversed){
    cout << reversed << endl ;
    cout << "YES" << endl ;
}
else{
    cout << reversed << endl ;
    cout << "NO" << endl ;
}
return 0;
}