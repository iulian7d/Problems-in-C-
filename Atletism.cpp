#include <iostream>
using namespace std;

int main(){
    int a, r;
    cin >> a >> r;
    if ((-1000 <= a) && (r <= 1000)) {
        cout << a + r << " " << a + r + r;
    }
    return 0;
}
