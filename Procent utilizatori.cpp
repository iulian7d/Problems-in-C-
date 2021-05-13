#include <iostream>
using namespace std;

int main(){
    float x, y;
    cin >> x >> y;
    if ((0 < x) && (x <= y) && (y < 1000)) {
        cout << ((y / x) -1)* 100 ;
    }
    return 0;
}
