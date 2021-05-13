#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    if ((0 <= a) && (c <= 100)){
        cout << (a + b + c) / 3;
    }
}
