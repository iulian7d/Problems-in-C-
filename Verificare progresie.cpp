#include <iostream>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    if  ((-1000 < a) && (a < 1000) && (-1000 < b) && (b < 1000)) {
       cout << b - (a - b) << " " << b - 2 *(a - b) << " " << b - 3 *(a - b);
   }
    return 0;
}
