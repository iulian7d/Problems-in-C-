#include <iostream>
using namespace std;

int main() {
    const int l =100;
    int n, m[l][l];
    cin >> n;
    for (int i = 1; i <= n; ++i){
        for (int j = 1; j <= n; ++j){
           if (i <= n/2 && j <= n/2){
                cout << "1";
           }else if (i > n/2 + 1 && j <= n/2){
                cout << "4";
           }else if (i <= n/2  && j > n/2 + 1){
                cout << "2";
           }else if (i > n/2 + 1 && j > n/2 + 1){
                cout << "3";
           }else {
                cout << n;
           }
        }
        cout << "\n";
    }
return 0;
}
