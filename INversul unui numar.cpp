#include <iostream>
using namespace std;

int main(){
    int x, inv=0;
    cin >> x;
    if (0 < x && x < 1000000000){
        while (x>0){
            inv= inv*10 + x%10;
            x=x/10;
        }
        cout << inv;
    }
    return 0;
}
