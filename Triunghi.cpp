#include <iostream>
using namespace std;

int main(){
    int n, cont=1;
    cin >> n;
    int m = n;
    while (m>0){
        n = m;
        while (n>0){
            cout << n << " ";
            --n;
        }
        cout << "(" << cont << ")" << "\n";
        ++cont;
        --m;
    }
    return 0;
}
