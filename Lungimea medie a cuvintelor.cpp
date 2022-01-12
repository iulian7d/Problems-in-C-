#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;

int main() {
    char s[100];
    double x = 0, y = 0;
    double av = 0;
    cin.getline(s,100);
    int n = strlen(s)+1;

    for (int i = 0; i < n; ++i){
        if (('a' <= s[i] && s[i] <= 'z')||('A' <= s[i] && s[i] <= 'Z')){
            ++x;
        }else {
            av += x;
            x = 0;
            if (('a' <= s[i-1] && s[i-1] <= 'z')||('A' <= s[i-1] && s[i-1] <= 'Z')){
            ++y;
            }
        }
    }
    av = (av + x) / y;
    if ( y == 1 ){
        cout <<fixed << setprecision(2) << av;
    }else if (av > 0){
        cout << fixed << setprecision(2) << av;
    }else {
        cout << fixed << setprecision(2) << x;
    }

    return 0;
}
