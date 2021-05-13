#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;
    if (1<=a && a<b && b<c && c<=1000){
        if (a*a+b*b == c*c) {
            cout << "DA";}
            else { cout << "NU";}

            }

    return 0;
}
