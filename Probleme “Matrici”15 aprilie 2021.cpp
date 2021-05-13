#include <iostream>
using namespace std;

int main(){
int n, m, cmmdc, aux;
cin >> n >> m;
int v[n][m];
for (int i = 1; i <= n; ++i)
    for (int j = 1; j <= m; ++j)
        cin >> v[i][j];

for (int i = 1; i <= m; ++i){
    cmmdc = v[1][i];
    for (int j = 2; j <= n; ++j){
        aux = v[j][i];
        while (aux != cmmdc){
            if (aux > cmmdc)
                aux = aux - cmmdc;
            else if (aux < cmmdc)
                cmmdc = cmmdc - aux;

        }
    }
cout  << cmmdc << " ";
}

return 0;
}
