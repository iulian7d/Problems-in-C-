#include <iostream>
using namespace std;

int main(){
    float a, b, c, d;
    cin >> a >> b >> c >> d;
    if ((-200 < a) && (a < 1000) && (-200 < b) && (b < 1000) &&
            (-200 < c) && (c < 1000) && (-200 < d) && (d < 1000)
            && ((b / a) !=0 ) && ((d / c) != 0) && ((c / b) != 0)) {

        if (((b / a) == (c / b)) && ((c / b)== (d / c))){
            cout << "DA";
        } else {
            cout << "NU";
            }
        }
    return 0;
}
