#include <iostream>
using namespace std;

int main(){
    int A, B;
    cin >> A >> B;
    if ((-100 < A) && (B <= 100)) {
        cout << abs(A + B) % abs(A - B);
    }
}
