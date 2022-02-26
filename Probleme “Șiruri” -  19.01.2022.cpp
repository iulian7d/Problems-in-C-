#include <iostream>
using namespace std;

int main(){
    int n, x, v[101], m;
    cin >> n >> x;
    m = n;
    for (int i = 1; i <= m ; ++i){
        v[i] = x * n;
        --n;
    }
    for (int i = 1; i <= m; ++i){
        cout << v[i] << " ";
    }

return 0;
}
