#include <iostream>
#include <cstring>

using namespace std;

int main() {
    const int maxCh = 10000;
    char sir1[maxCh];
    cin >> sir1;
    char cuv[maxCh];
    cin >> cuv;
    char *p = strstr(cuv,sir1);
    while (p !=0){
        cout << p - cuv+1 << " ";
        p = strstr(p + 1, sir1);
    }
    return 0;
}
