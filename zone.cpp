#include <iostream>
using namespace std;

int main(){
    int n, m, mt[51][51];
    cin >> n;
    int a = 1;
    m = n;
    while  (a <= n/2){
       for (int j = a + 1; j < m; ++j)
            mt[a][j] = 1;
        --m;
        ++a;
    }
    int b = n, o = n, h = 1;
    while  (b > n/2){
       for (int j = h + 1; j < o; ++j)
            mt[b][j] = 3;
        --o;
        --b;
        ++h;
    }
    int z = n, c = 1;
    while  (c <= n/2){
       for (int j = c + 1; j < z; ++j)
            mt[j][c] = 4;
        --z;
        ++c;
    }
    int x = n, d = n, u = 1;
    while  (d > n/2){
       for (int j = u + 1; j < x; ++j)
            mt[j][d] = 2;
        --x;
        --d;
        ++u;
    }

    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= n; ++j)
            if ( i == j )
                mt[i][j] = 0;

    int e = n, f = 1;
    while(e > 1) {
        mt[e][f] = 0;
        --e;
        ++f;
    }
     for (int i = 1; i <= n; ++i){
        for (int j = 1; j <= n; ++j)
            cout << mt[i][j]<< " ";
        cout << "\n" ;
    }
    return 0;
}
