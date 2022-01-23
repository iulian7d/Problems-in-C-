#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(){
    ifstream fin("date.in");
    string s;
    string z[20];
    int cnt = 0;
    while (getline(fin, s)){
       ++cnt;
       z[cnt] = s;
    }
    if ((cnt < 2 ) || (cnt == 2 && (z[cnt] == "\n" || z[cnt] == " "))){
        cout << "text prea scurt";
    } else {
        cout << z[2];
    }
return 0;
}
