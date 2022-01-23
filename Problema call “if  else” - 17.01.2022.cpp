#include <iostream>
using namespace std;

int main() {
    int x, y, small_multiple, big_multiple;
    cin >> x >> y;
    int y_divisor = x / y;
    small_multiple = y_divisor * y;
    big_multiple = (y_divisor + 1) * y;
    if (x - small_multiple < big_multiple - x){
        cout << small_multiple;
    } else {
        cout << big_multiple;
    }
return 0;
}
