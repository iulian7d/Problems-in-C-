#include <iostream>

using  namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if (abs(a) < abs(b) && abs(b) < abs(c)){
        cout << a <<" " << b << " "<< c;
    } else if (abs(a) < abs(c)&& abs(c) < abs(b)){
        cout << a <<" " << c << " "<< b;
    } else if (abs(b) < abs(a) && abs(a) < abs(c)){
        cout << b <<" " << a << " "<< c;
    } else  if (abs(b) < abs(c) && abs(c) < abs(a)){
        cout << b <<" " << c << " "<< a;
    } else  if (abs(c) < abs(b) && abs(b) < abs(a)){
        cout << c <<" " << b << " "<< a;
    } else  if (abs(c) < abs(a) && abs(a) < abs(b)){
        cout << c <<" " << a << " "<< b;
    }
    return 0;
}
