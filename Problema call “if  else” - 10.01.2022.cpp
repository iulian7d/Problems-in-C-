#include <iostream>
using namespace std;

int main() {
    int x, y, cnt = 0;
    cin >> x >> y;
    if ( x % (y % 10) == 0 ){
        ++cnt;
    }
    if ( x % ((y / 10) % 10) == 0 ){
        ++cnt;
    }
    if ( x % (y / 100) == 0 ){
        ++cnt;
    }
    cout << cnt;
return 0;
}
