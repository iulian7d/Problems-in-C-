#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    if ((0<N && N<10000)&&(N%2==0)&&(N%3==0)){
            cout << "fizzbuzz";}
    else if ((0<N && N<10000)&&(N%3==0)){
            cout << "buzz";}
    else if ((0<N && N<10000)&&(N%2==0)) {

        cout << "fizz";
    }



    return 0;
}
