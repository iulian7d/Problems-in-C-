#include <iostream>
using namespace std;

int main(){
    int n, c, nn = 0, p=1, z=0, u=0;
    cin >> n >> c;
    if (n == 0 && n == c ){
        cout << -1;
    } else if (n == 0){
        cout << 0;
    } else {
    if ( n > 0 &&   n < 100000000){
        while ( n > 0){
            if (n % 10 == c){
                ++u; // cate n=c si care se elimina
                n = n / 10;
            }else if (n % 10 != c){
                nn = nn *10 + n % 10;
                if (nn == 0){
                    p= p *10; // cate 0 la sfarsit
                }
                n = n / 10;
            }
            ++z; // nr de cifre
        }
        while (nn > 0){
            n= n*10 + nn %10;
            nn = nn /10;
        }
        n= n * p;
        if (n == 0){
            if (u==z){
                cout << "-1";
        }   else if (u != z){
                cout << "0";
        }
        }else  {
                cout << n;
            }
    }
    }
    return 0;
}
