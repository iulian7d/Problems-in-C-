#include <iostream>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    if (a < b) {
        cout << "CRESCUT";
    }
        if (a == b) {
            cout << "CONSTANT";
    }
        if (a > b){
            cout << "SCAZUT";
            }
    return 0;
}
