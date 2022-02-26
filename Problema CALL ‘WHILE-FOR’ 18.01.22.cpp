#include <iostream>
using namespace std;

int main(){
    int n, m, nNr = 0, newNr, tens = 0, temp = 1;
    cin >> n;
    m = n;
    while (n > 0){
      ++nNr;
      n = n / 10;
    }
    tens = nNr / 2;
    while (tens > 0){
        temp = temp * 10;
        --tens;
    }
    newNr = m % temp;
    m = m / (temp * 10);
    newNr = newNr + m * temp;


cout << newNr;
return 0;
}
