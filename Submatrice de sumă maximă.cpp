#include <iostream>
using namespace std;

int main(){
    int n, m, mt[100][100], maxsum, sp[100][100], sum = 0, z = 1;
    cin >> n >> m;
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= m; ++j){
            cin >> mt[i][j];
            if (mt[i][j] < -3000 || mt[i][j] > 3000)
                z = 0;
        }
    sp[1][1] = mt[1][1];
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= m; ++j)
                sp[i][j] = mt[i][j] + sp[i - 1][j] + sp[i][j - 1] - sp[i - 1][j - 1];
    maxsum = -3500;
    for (int x1 = 1; x1 <= n; ++x1){
        for (int x2 = x1; x2 <= n; ++x2)
            for (int y1 = 1; y1 <= m; ++y1)
                for (int y2 = y1; y2 <= m; ++y2){
                        sum =  sp[x2][y2] - sp[x1-1][y2] - sp [x2][y1-1] + sp[x1 -1][y1 - 1];
                if (sum > maxsum)
                    maxsum = sum;
                }
    }
    if (z == 1)
    cout << maxsum ;
    return 0;
}
