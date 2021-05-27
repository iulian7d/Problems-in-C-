#include <iostream>
using namespace std;

void  inserareMedie(int &n, int &m, double mt[51][51],int k){
    double sum = 0;
    for (int i = n; i > k; --i){
        for (int j = 0; j < m; ++j){
            mt[i][j] = mt[i-1][j];
        }
    }
    for (int i = 0; i < m; ++i){
        mt[k][i] = 0;
    }
    for (int i = 0; i < m; ++i){
        for (int j = 0; j < n+1; ++j){
            sum += mt[j][i];
            }
        mt[k][i] = sum / n ;
        sum = 0;
        }
    n = n + 1;
}
int main(){
    int n , m ;
    cin >> n >> m ;
    double mt[51][51];
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < m; ++j){
        cin >> mt[i][j];
    }
   }
    inserareMedie(n, m, mt, 1);

    for (int i = 0; i < n; ++i){
        for (int j = 0; j < m; ++j){
        cout << mt[i][j] << " ";
    }
    cout << "\n";
   }
    return 0;
}

