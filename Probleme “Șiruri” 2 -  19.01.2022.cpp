#include <iostream>
using namespace std;

int main(){
    const int TEN = 100;
    int n, s[TEN + 1];
    cin >> n;
    for (int i = 0; i < n ; ++i){
        cin >> s[i];
        s[n+i] = s[i] % 10;
        s[i] = s[i] /10;
    }
    for (int i = 0; i < n * 2; ++i){
        cout << s[i] << " ";
    }
return 0;
}
