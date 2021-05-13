#include <iostream>
using namespace std;

int main(){
    int n, p=1, nl, z = 1 ;
    cin >> n;
    if (n==1 || n==2){
        cout << "1";
    } else {
        while (n > 2){
            nl = z + p;
            --n;
            p = z;
            z = nl;
    }
            cout << nl ;
    }
    return 0;
}
