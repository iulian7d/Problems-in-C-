#include <iostream>
using namespace std;
int main(){
    int n, y = 1001;
    cin >> n;
    int v[n], w[n];
    for (int i = 1; i <= n; ++i){
        cin >> v[i];
        w[i] = -1;
    }
    for (int i = 1; i <= n; ++i){
        y = 1001;
        if (i % 2 == 0){
            for (int j=i-1; j>=1; --j){
                if (v[j]>v[i] && v[j] < y) {
                    w[i] = v[j];
                    y = v[j];
   //             }else if (w[i] == 0) {
     //               w[i] = -1;
                }
            }
        } else if (i % 2 != 0){
            y = 1001;
            for (int j=i+1; j<=n; ++j){
                if (v[j]>v[i] && v[j] < y){
                    w[i] = v[j];
                    y = v[j];
   //             } else if (w[i] == 0) {
     //               w[i] = -1;
               }
            }
        }
    }
    for (int i = 1; i <= n; ++i){
        cout << w[i] << " ";
    }
    return 0;
}
