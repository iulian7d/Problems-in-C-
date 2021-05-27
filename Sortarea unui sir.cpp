#include <iostream>
using namespace std;

int sortare(int n, int v[100]){
   int aux = 0, x = 0;
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < n; ++j){
            if (v[i] < v[j]){
              aux = v[i];
              v[i] = v[j];
              v[j] = aux;
            }
        }
    }
}

int main(){
    int n, v[100];
    cin >> n;
    for (int i = 0; i < n; ++i){
        cin >> v[i];
    }
    sortare(n,v);
    for (int i = 0; i < n; ++i){
        cout << v[i] << " ";
    }
    return 0;
}
