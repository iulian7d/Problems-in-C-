#include <iostream>
#include <string>
using namespace std;
int a;

int maxCons0(long long n){
int cnt = 0, temp = 0;
while (n > 0){
    if (n % 10 == 0){
        ++cnt;
    } else {
        if (temp < cnt){
            temp = cnt;
        }
        cnt = 0;
    }

    n = n / 10;
}
return temp ;
}
int main(){
    int n, v[10000];
    cin >> n;
    for (int i = 0; i < n; ++i){
        cin >> v[i];
    }
    cout << zeroCons(n,v);
return 0;
}
