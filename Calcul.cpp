#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, b;
    cin >> a;
    cin >> b;
    while (a <= 100 && b <= 100) {
    cout << (a-b)*(a-b)*(a-b);
    return 0;
    }
}
