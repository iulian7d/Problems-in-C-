#include <iostream>
using namespace std;
int main(){
    int n, m, aux,k,j=0;
    cin >> n;
    int v[n];
    for (int i=1; i <= n; ++i){
        cin >> v[i];
    }
    cin >> m;
    int w[m];
    for (int i=1; i <= m; ++i){
        cin >> w[i];
    }
    k=n+m;
    int a[k];
    for (int i=1; i<=n; ++i){
        a[i]=v[i];
    }
    for (int i=n+1; i<=k; ++i){
        a[i]=w[i-n];
    }
    while (j==0){
    j=1;
    for (int i=1; i<=k; ++i){
        if (a[i]>a[i+1]){
            j=0;
            aux= a[i];
            a[i]=a[i+1];
            a[i+1]=aux;
        }
    }
    }
    for (int i=1; i <=k; ++i){
        cout << a[i] << " ";
    }
    return 0;
}
