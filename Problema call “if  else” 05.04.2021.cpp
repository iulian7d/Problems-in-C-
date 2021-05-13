#include <iostream>
using namespace std;

int main(){
int v, vl, x;
cin >> v >> vl;
x = ( v * 100 / vl) - 100;
if (v <= vl){
    cout << "Automobilul circula cu viteza regulamentara";
}else if (v > vl){
    cout << "Atentie! Ati depasit viteza legala cu " << x << " %" ;
}
return 0;
}
