#include <iostream>
#include <cstring>
#include <math.h>

using  namespace std;

const int mx = 10;

long strToNumber(char nr[]){
long val = 0;
int lg = strlen(nr), i = 0;
if (lg <= 8){
    while (lg > 0 ){
        val = (val * 10) + (nr[i] - '0') ;
        --lg;
        ++i;
        }
    }
return pow(val,2);
}

int main() {
    //char nr[mx];
    char nr[mx] = "11111111";
    //cin >> nr[mx];
    cout << strToNumber(nr);

    return 0;
}

