#include <iostream>
using namespace std;

int main(){
int a, b;
cin >> a >> b;
if (a == 0 && b != 0)
    cout << "Ecuatie imposibila";
else if ( a == 0 && b == 0)
    cout << "Exista o infinitate de soluzii";
else if (-100 < a && a < 100 && -100 < b && b < 100 && a != 0)
     cout << (0 - b) / a << " ";
}
