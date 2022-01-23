#include <iostream>
using namespace std;
int a;

int inv(int x){
    int y = 0;
    while ( x > 0 ){
     y = (y * 10 ) + x % 10;
     x = x / 10;
    }
return y ;
}

int ePalindrom(int z){
    if (z == inv(z)){
        return 1;
    } else {
    return 0;
    }
}

int nrPal(int a, int b){
int cnt = 0;
cin >> a >> b;
for (int i = a; i <= b; ++i){
    if (ePalindrom(i) == 1){
        ++cnt;
    }
}
return cnt;
}

int main(){
int a, b;
nrPal(a,b);
return 0;
}
