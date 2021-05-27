#include <iostream>
#include <cstring>
using namespace std;

void addChars(char s[200]){
    int n = strlen(s);
    for (int i = 0; i < n; ++i){
        if (s[i] == 'a' || s[i] == 'o' || s[i] == 'i' || s[i] == 'e' ||
            s[i] == 'u' || s[i] == 'A' || s[i] == 'O' || s[i] == 'I' ||
            s[i] == 'E' || s[i] == 'U' ) {
                for (int j = n + 1; j > i; --j){
                    s[j] = s[j-1];
                }
                s[i+1] = '$';
                n = n+1;
        }
    }
    cout << s;
}
int main() {
    char s[200];
    cin.getline(s,100);
    addChars(s);
}
