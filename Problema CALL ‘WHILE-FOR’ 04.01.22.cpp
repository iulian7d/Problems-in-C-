#include <iostream>

using  namespace std;

int main() {
    long n;
    cin >> n;
    int m = n % 10, ctn = 0;
    while (n > 0){
        if (m == n % 10){
            ++ctn;
        }
        n = n / 10;
    }

    cout << ctn;
    return 0;
}
