#include <iostream>
using namespace std;

int main(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if ((-100 < a) && (a < 100) && (-100 < b) && (b < 100) && (-100 < c) && (c < 100) && (-100 < d) && (d < 100)){
        if ((a >= b) && (b >= c) && (c >= d)&&(a != d)){
            cout << "Descrescator";
        } else if ((a <= b) && (b <= c) && (c <= d) && (a != d)){
            cout << "Crescator";
        } else {
            cout << "Nemonoton";
        }
    }
    return 0;
}
