#include <iostream>
using namespace std;

int main(){
    int a, b, c, x;
    cin >> a >> b >> c;
       if (b<=a){
        x=a;
        a=b;
        b=x;
       }
       if (c<=a){
        x=a;
        a=c;
        c=x;
       }
       if (c<=b){
        x=b;
        b=c;
        c=x;
       }
        if ((a==b && b==c)){
            cout << "0";
        } else if (a==b || b==c || a==c){
            cout << c-b-1+b-a-1+1;
        } else {
            cout << c-b-1+b-a-1;
        }
    return 0;
}
