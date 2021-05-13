#include <iostream>
using namespace std;

int afisareSolutii(int c){
   int x = 0, y = 0, z = c;
   while (x + y + z == c && z > 0 && y <= z){
        cout << x <<" "<< y << " "<< z;
        cout << "\n";
            ++y;
            --z;
   }
   ++x;
   while (x > 0 && z > 0 && y <= z){
        --z;
        cout << x <<" "<< y << " "<< z;
        cout << "\n";

   }

   return 0;
}
int main(){
int n;
cin >> n;
afisareSolutii(n);
}
