#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A;
    cin >> B;
    while (A>0 && B>0){
    if (A % B == 0) {
    cout << "posibil";
    return 0;
    }
    if (A % B != 0){
    cout << "imposibil";
    return 0;
        }
}
}
