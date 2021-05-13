#include <iostream>
using namespace std;

int main(){
    int n , m=0, i, p=0, c=1, x=1;
    cin >> n;
    for (i=-1 ; n!=0; ++i ){
      cin >> n;
      if (n> 0 && n< 10000 && i<1000 ){
        if (n >= m ){
            if (n==m){
                ++x;
            }
            m=n;
            ++p;
        }
        if (n<m){
            ++c;
        }
      }
    }
    if (i == 0){
        cout << "nemonoton";
    } else if (p == i && x !=i){
        cout << "crescator";
    } else if (c == i){
        cout << "descrescator";
    } else if (x == i || n==0 ){
        cout << "nemonoton";
    }   else{
        cout << "nemonoton";
    }

    return 0;
}
