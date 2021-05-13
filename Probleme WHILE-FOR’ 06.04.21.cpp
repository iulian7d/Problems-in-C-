#include <iostream>
using namespace std;

int main(){
int a, b, c = 0;
cin >> a >> b;
while (a > 0 && b > 0) {
    c = ((c * 10) + (a % 10))* 10 + b % 10;
    a = a / 10;
    b = b / 10;
}

cout << c ;
return 0;
}
