#include <iostream>
using namespace std;

int main (){
    int n, p=1, x;
    cin >> n;
    x= n;
    while (n > 0){
        while (n > 0) {
            p= p * (n % 10);
            n= n / 10;
            }
        if (p > 9){
            n=p;
            p=1;
        }
        }
    if (x == 0){
        cout << "0";
    } else {
        cout << p;
    }
    return 0;
}
