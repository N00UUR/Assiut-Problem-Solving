#include<iostream>
using namespace std;
int main()
{
    int A , B ;
cin >> A >> B ;

int Min, Max;
Min = (A < B) ? A : B ;
Max = (A > B) ? A : B ;
bool foundAny = false;


for(int i = Min ; i <= Max ; i++){
bool found = true;
int num = i; 

    while (num > 0) {

        int digit = num % 10 ;

        if(digit != 4 && digit != 7 ){
                found = false;
            break;
    }
        num = num /10 ;

        
    }
    
    if(found == true){
        cout << i << " ";
        foundAny = true; 

}
}

if (foundAny == false) {
        cout << -1 << endl;
    }


    return 0;
}