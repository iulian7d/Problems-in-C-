#include <iostream>
using namespace std;

int main(){
    int x, p=0;
    cin >> x;
    while (x>9){
        if (((x % 10)+(x % 100)/10) % 2 == 0){
            ++p;
        }
        x = x / 10;
    }
    cout << p;
    return 0;
}
