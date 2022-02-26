#include <iostream>
using namespace std;

int main(){
    const int p = 100;
    int n, m, mt[p][p], cnt = 0;
    cin >> n >> m;
    for (int i = 0; i < n; ++i ){
        for (int j = 0; j < m; ++j ){
            cin >> mt[i][j];
        }
    }
    for (int i = 1; i < n; ++i){
        for (int j = 1; j < m; ++j){
            if ((mt[i-1][j] % 2 != 0) && (mt[i][j+1] % 2 != 0) && (mt[i+1][j] % 2 != 0) && (mt[i][j-1] % 2 != 0)){
                ++cnt;
            }
        }
    }
    cout << cnt;
return 0;
}
