#include <iostream>
using namespace std;

int main(){
    int B, A, p=0;
    cin >> A;
    if (A>0 && A < 1000 && A % A == 0){
        p=1;
        while (B!=0 && B < 99999){
            cin >> B;
            if (B > 0 && B < 1000 && B % A == 0){
                    ++p;
                if (B == 0){
                    break;
            }
            }
        }
        cout << p;
    } else {
        cout << 0;
    }
    return 0;
}
