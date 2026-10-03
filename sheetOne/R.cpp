#include <iostream>
using namespace std;
int main() {
    int N;
    cin >> N;
    int y =  (N / 365);
    int m = (N % 365) / 30;
    int d = (N % 365) % 30;
    cout << y<< " years" << endl;
    cout << m << " months" << endl;
    cout << d << " days" << endl;
    return 0;
}