#include <iostream>
using namespace std;

int main(){
    int N, cont =0 , x=1, y=0, z, p, u, s;
    cin >> N;
    if (9 < N && N < 1000000000){
    z= N;
    while (z > 0){
        z= z / 10;
        if (x == 1){
            y= z % 10;
        }
        ++x;
        ++cont;
    }
    s= cont;
    p=N;
    while ((cont-2) >0){
        p= p / 10;
        --cont;
    }
    u=p % 10;
    N= N - (y * 10) + (u * 10);
    while ((s-2) > 0){
        u= u * 10;
        y= y * 10;
        --s;
    }
    N= N + y - u;
    cout << N ;
    }
    return 0;
}
