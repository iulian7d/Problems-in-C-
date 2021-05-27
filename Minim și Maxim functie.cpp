#include <iostream>
using namespace std;

void  minMax(int n, int v[100], int &minim, int &maxim){
    minim = 101;
    maxim = -101;
    for (int i = 0; i < n; ++i){
        if (v[i] < minim){
            minim = v[i];
        }
        if (v[i] > maxim){
            maxim = v[i];
        }
    }
}
int main(){
    int n, minim = 101, maxim = -101;
    cin >> n;
    int v[100];
    for (int i = 0; i < n; ++i){
        cin >> v[i];
    }
    minMax(n,v, minim, maxim);
    cout << minim << " "<< maxim;
    return 0;
}

