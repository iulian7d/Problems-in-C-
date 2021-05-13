#include <iostream>
using namespace std;

int main(){
    int a, inv = 0, j=2, nr_prim_na=0, i=2, nr_prim_inv=0;
    cin >> a;
    int na=a;
    if (1 <= a && a < 300000 && (a % 10!=0)){
        while (a > 0){
            inv=inv*10 + a%10;
            a=a/10;
        }
    while (i < inv){
        if (inv % i == 0){
          nr_prim_inv += 1 ;
        }
        ++i;
    }
    while (j < na){
        if (na % j == 0){
           nr_prim_na += 1;
        }
        ++j;
    }
    if (nr_prim_inv == 0 && nr_prim_na == 0
            && inv != 1 && a != 1 ){
        cout << "DA";
    } else {
        cout << "NU";
    }
    }
    return 0;
}
