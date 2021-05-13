#include <iostream>
using namespace std;

int main(){
    int N,p = 1, x = 0;
    cin >> N;
    int cN= N;
    while (N > 9){
        N= N / 10;
        ++p;
    }
    while (cN > 9){
        if ((cN % 10) % N == 0){
            ++x;
        }
        cN=cN/10;
    }
    cout << x;
    return 0;
}
