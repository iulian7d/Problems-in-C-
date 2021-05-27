#include <iostream>
using namespace std;

int afisareSolutii(int c){
   int x = 0, y = 0, z = c;
   cout << x <<" "<< y << " "<< z;
   cout << "\n";
   while ( z > 1 && y < c && x <= y ){
         if (z - y != 1 && z != y){
                ++y;
                --z;
                cout << x <<" "<< y << " "<< z;
                cout << "\n";
         } else if ((y - x == 1 && z - y == 1)||(z - y == 1 && y - x == 1)){
                ++x;
                --z;
                cout << x <<" "<< y << " "<< z;
                cout << "\n";
         }else if ((y == z && y - x > 2)||(z - y == 1 && y - x > 1)){
                ++x;
                y = x;
                z = c - x - y;
                cout << x <<" "<< y << " "<< z;
                cout << "\n";
         }else if(y == z && y - x == 2){
                ++x;
                --y;
                cout << x <<" "<< y << " "<< z;
                cout << "\n";
         }else if((x == y && y == x)||(y == z && y - x == 1)){
                 break;
                  }
   }
   return 0;
}
int main(){
    int n;
    cin >> n;
    afisareSolutii(n);
        return 0;
}
