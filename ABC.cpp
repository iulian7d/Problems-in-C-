#include <iostream>
using namespace std;

int main(){
    int a, b, c, x, i, count=0, first=0, last;
    cin >> a >> b >> c >> x;
    last = x % 10;
    i = x;
    while (x>0) {
        x=x/10;
        ++count;
    }
    x=count;
    while (count>1){
        i = i / 10;
        --count;
    }
    first=i;
    if (x == a && first == b && last== c ){
        cout << "DA";
    }else {
        cout << "NU";
    }

    return 0;
}
