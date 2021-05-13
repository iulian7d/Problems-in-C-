#include <iostream>
using namespace std;

int main(){
    int A, B, C;
    cin >> A >> B >> C;
    if ((0 <= A) && (0 <= B) && (0 <= C) && (A <= 100) && (B <= 100) && (C <= 100)) {
        if ((A != B) || (A != C) || (B != C)) {
            cout << "DA";
        }
        else if ((A == B) && (B == C)){
            cout << "NU";
        }
    }
    return 0;
}
