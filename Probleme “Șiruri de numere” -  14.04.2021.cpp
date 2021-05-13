#include <iostream>
using namespace std;

int main(){
int n, m;
cin >> n >> m;
int v[n], w[m], t[10000];
    for (int i = 1; i <= 10000; ++i)
        t[i] = 0;
    for (int i = 1; i <= n; ++i){
        cin >> v[i];
        if (v[i]% 2 == 0)
            if (t[v[i]] == 0)
                t[v[i]] = 1;
            else if (t[v[i]] > 0)
                t[v[i]] += 1;
    }
    for (int i = 1; i <= m; ++i){
        cin >> w[i];
        if (w[i]% 2 == 0)
            if (t[w[i]] == 0)
                t[w[i]] = 1;
            else if (t[w[i]] > 0)
                t[w[i]] += 1;
    }

    for (int i = 1; i <= 10000; ++i)
        if (t[i] != 0)
            for (int j = 1; j <= t[i]; ++j)
                cout << i << " ";
return 0;
}
