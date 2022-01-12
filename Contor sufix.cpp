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
    int cnt = 0, cnt1 = 0;
    char b[mx];
    for (int i = 1; i <= n+1; ++i){
        cin.getline(b,mx);
        int luB = strlen(b), c = 0;
        if (luB > luA) {
            for (int j = luA; j >= 0; --j){
                if (a[j-1] == b[luB-c-1]){
                    ++cnt;
                    ++c;
                }
            }
            if (c == luA){
                ++cnt1;
            }
            cnt = 0;
        }

    }
    cout << cnt1;
    return 0;
}
