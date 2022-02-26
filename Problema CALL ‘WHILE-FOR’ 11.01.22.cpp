#include <iostream>
using namespace std;

int main(){
    int n, m, sum = 0, cnt = 0;
    cin >> n;
    while (n > 0){
      sum += n % 10;
      n = n / 10;
    }
    m = sum;
    while (sum > 0){
        if (m % sum == 0){
            ++cnt;
        }
        --sum;
    }
    if ( cnt  == 2 ){
        cout << m * 2;
    } else {
        cout << m / 2;
    }

return 0;
}
