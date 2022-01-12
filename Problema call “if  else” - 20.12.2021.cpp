#include <iostream>

using  namespace std;

int main() {
    int x, y, z;
    cin >> x >> y >> z;
    if ((x == y) && (y == x)){
        cout << "triunghi echilateral ";
    } else if ((x == y) || (y == z) || (x == z)){
            cout << "triunghi isoscel";
        } else {
                cout << "triunghi oarecare";
        }

    return 0;
}
