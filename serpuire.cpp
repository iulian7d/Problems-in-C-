#include <iostream>
using namespace std;

int main() {
    const int l = 101;
    int n, m[l][l];
    cin >> n;
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++) {
            cin >> m[i][j];
        }
    int i, j, k;
    i = 0;
    for(k = 1; k <= 2 * n - 1; k++) {
        if(k > n) {
            i++;
        }
        if(k % 2 == 0)
            for(j = i + 1; j <= k - i; j++) {
                cout << m[j][k + 1 - j] << " ";
            } else
            for(j = k - i; j > i; j--) {
                cout << m[j][k + 1 - j] << " ";
            }
    }
    return 0;
}
