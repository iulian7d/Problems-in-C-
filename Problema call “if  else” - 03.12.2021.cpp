#include <iostream>
using namespace std;

int main(){
int a, b, c;
cin >> a >> b >> c;
if (a <= c && c <= b && c % 2 != 0){
    cout << "Apatine";
    } else if(c <= a && b <= c && c % 2 == 0){
        cout << "Nu apartine";
    } else {
        cout << "Fals";
    }
return 0;
}
