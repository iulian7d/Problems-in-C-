#include <iostream>
using namespace std;

int main(){
    int a, b, c, d, x;
    cin >> a >> b >> c >> d;
    if (a!=b && b!=c && c!=d) {
           if (b<=a){
            x=b;
            b=a;
            a=x;
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
           if (d<=a){
            x=a;
            a=d;
            d=x;
           }
           if (d<=b){
            x=b;
            b=d;
            d=x;
           }
           if (d<=c){
            x=d;
            d=c;
            c=x;
           }
            cout << a <<" "<< b << " "<< c << " "<<d;
           }
    return 0;
}
