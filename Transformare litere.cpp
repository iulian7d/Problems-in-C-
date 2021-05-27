#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char s[1000];
    int x = 0;
    cin.getline(s,1000);
    int n = strlen(s);
    for (int i = 0; i < n; ++i){
        if ('a' <= s[i] && s[i] <= 'z') {
            x = int(s[i]);
            x = x - 32;
            s[i] = char(x);
        } else if (('A' <= s[i] && s[i] <= 'Z')) {
             x = int(s[i]);
             x = x + 32;
             s[i] = char(x);
        }
    }
    cout << s;
    return 0;
}
