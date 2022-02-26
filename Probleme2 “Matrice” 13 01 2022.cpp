#include <iostream>
using namespace std;

int main(){
    const int p = 100;
    int n, m, mt[p][p];
    cin >> n >> m;
    for (int i = 0; i < n; ++i ){
        for (int j = 0; j < m; ++j ){
            cin >> mt[i][j];
        }
    }
    int valid = 0;
    for (int i = 0; i < n / 2 && valid == 0; ++i){
        for (int j = 0; j < m && valid == 0; ++j){
            if (mt[i][j] != mt[n-i-1][j]){
                   valid = 1;
            }
        }
    }
    if (valid == 1){
        cout << "NU";
    } else {
        cout << "DA";
    }
return 0;
}
