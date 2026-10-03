#include <iostream>
#include <iomanip>
using namespace std;
int main() {
float N;
cin >> N;
    if (N == (int)N) {
        cout << "int "<<N;  
    }
    else {
        cout << "float "<< fixed << setprecision(3) << (int)N << " " << (N - (int)N);
    }
    return 0;
}