#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n, g;
    double tg = 0.0;
    cin >> n;
    for (int i = 1; i <= n; ++i){
        cin >> g;
        tg += g;
    }
    cout << fixed << setprecision(2) << tg / n;
  return 0;
}
