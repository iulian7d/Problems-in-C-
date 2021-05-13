#include <iostream>
using namespace std;

int main(){
    int n,m,ur=0, cb=0, u =0, j=0, i=1, z=0;
    cin >> n;
    if (n>=3 && n <= 500){
        while (i<=n) {
            cin >> m;
            if (m > ur){
                ++u;
                cb = m;
                ur = m;
            } else if( m < cb){
                ++j;
                if (j == 1){
                    z = u;
                }
                cb = m;
                ur = m;
            }
            ++i;
        }

        }if (u == z){
            cout << 1;
        } else if ( u != z ){
            cout << 0;
        }
    return 0;
}
