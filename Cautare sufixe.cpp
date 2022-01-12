#include <iostream>
#include <cstring>

using  namespace std;

int main() {
    int const mx = 101;
    char a[mx];
    cin >> a;
    int n = strlen(a);
    for (int i = n; i >= 0; --i){
        for (int j = i; j < n; ++j){
            cout << a[j];
        }
        cout << "\n";
    }
    return 0;
}
