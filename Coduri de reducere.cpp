#include <iostream>
using namespace std;

int main(){
    int n, c, m;
    cin >> n >> c;
    m=n;
    while (n>0){
        n = n / 10;
        c = c * 10;
    }
    cout << c+m << " " << (c+m)*2 ;
    return 0;
}
