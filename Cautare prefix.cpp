#include <iostream>
#include <cstring>

using  namespace std;

int main() {
    int n;
    int const mx = 101;
    cin >> n;
    char a[mx];
    cin >> a;
    int luA = strlen(a);
    int cnt1 = 0;
    char b[mx];
    for (int i = 0; i <= n; ++i){
        cin.getline(b,mx);
        int luB = strlen(b), cnt = 0;
        if (luB > luA) {
            for (int j = 0; j <= luA; ++j){
                if (a[j] == b[j]){
                    ++cnt;
                }
            }
            if (cnt == luA){
                ++cnt1;
            }
        }

    }
    cout << cnt1;
    return 0;
}
