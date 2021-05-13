#include <iostream>
using namespace std;

int main(){
int a, b, contor = 0;
cin >> a >> b;
for (int i = a; i <= b; ++i )
    for (int j = 1; j <= i/2; ++j)
        if ( j * j == i){
        cout << i << " ";
        }
return 0;
}
