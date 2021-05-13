#include <iostream>
using namespace std;

int main() {
    int n, x;
    cin >> n;
    cin >> x;
    while (0 <= n && n <= 1001 && 0 <= x && x <= 1001) {
    cout << n*x;
    return 0;
    }
}
