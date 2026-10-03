#include <iostream>
using namespace std;
int main() {
   int A , B , C;
    cin >> A >> B >> C;
    int MAX = max(A, max(B, C));
    int MIN = min(A, min(B, C));
    int MID = ((A + B + C )- MAX) - MIN;

    cout << MIN << endl << MID << endl << MAX << endl << endl;
    cout << A << endl << B << endl << C << endl;

    return 0;
}