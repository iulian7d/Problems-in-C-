#include <iostream>
using namespace std;

int main(){
    int n, m, mt[101][101];
    cin >> n;
    for (int i = 1; i <= n; ++i){
        for (int j = 1; j <= n; ++j)
            cin >> mt[i][j];
    }
    cout << "\n" ;
    int a = 1;
    m = n;
    while  (a <= n/2){
       for (int j = a + 1; j < m; ++j)
         cout <<  mt[a][j] << " ";
        --m;
        ++a;
    }
    cout << "\n" ;
    int z = 1 , c = 2, p = 1;
    if (n % 2 == 0){
        while  (c < n){
            if ( z < n / 2){
                for (int j =1; j <= z; ++j)
                    cout <<   mt[c][j]  << " ";
            }
            if ( z >= n / 2 && c < n){
                for (int j =1; j <= z - p; ++j)
                    cout <<   mt[c][j]  << " ";
                p = p +2;
            }
            ++z;
            ++c;
        }
    } else {
        p = 2;
        while  (c < n){
            if ( z <= n / 2){
                for (int j =1; j <= z; ++j)
                    cout <<   mt[c][j]  << " ";
            }
            if ( z > n / 2 && c < n){
                for (int j =1; j <= z - p; ++j)
                    cout <<   mt[c][j]  << " ";
                p = p + 2;
            }
            ++z;
            ++c;
        }
    }
    cout << "\n" ;
    int o = n / 2 + 1, h = n / 2;
    if (n % 2 == 0){
        while  (o < n){
            for (int j = h; j <= o; ++j)
                cout <<  mt[ o + 1 ][j]  << " ";
            ++o;
            --h;
        }
    }else {
        h = n /2 +1;
        while  (o < n){
            for (int j = h; j <= o; ++j)
                cout <<  mt[ o + 1 ][j]  << " ";
            ++o;
            --h;
        }
    }
    cout << "\n" ;
    int x = n, d = 2, u = 1;
    if (n % 2 == 0){
        while  (d < n){
            if (x > n/ 2 + 1){
                for (int j = x; j <= n; ++j)
                    cout <<   mt[d][j]  << " ";
            }
            if ( x <= n / 2 + 1 && d < n){
                for (int j = x + u; j <= n; ++j)
                    cout <<   mt[d][j]  << " ";
                u = u + 2;
            }
            --x;
            ++d;
        }
    } else {
        u = 2;
        while  (d < n){
            if (x > n / 2 + 1){
                for (int j = x; j <= n; ++j)
                    cout <<   mt[d][j]  << " ";
            }
            if ( x <= n / 2 + 1 && d < n){
                for (int j = x + u; j <= n; ++j)
                    cout <<   mt[d][j]  << " ";
                u = u + 2;
            }
            --x;
            ++d;
        }
    }
    return 0;
}
