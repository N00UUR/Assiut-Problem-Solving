#include <iostream>
using namespace std;

int main() {
int A , B , C;
    cin >> A >> B >> C;
    int MAX = max(A, max(B, C));
    int MIN = min(A, min(B, C));
    cout << MIN << " " << MAX;
}