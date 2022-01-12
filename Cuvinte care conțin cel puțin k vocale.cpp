#include <iostream>
#include <fstream>
#include <cstring>

using  namespace std;

int main() {
    char s[260];
    int k;
    cin >> k;
    while (cin >> s){
        int cnt1 = 0, cnt2 = 0, tmp, lg = strlen(s);
        for (int i = 0; i <= lg; ++i){
            if (('a' <= s[i] && s[i] <= 'z') || ('A' <= s[i] && s[i] <='Z')){
                ++cnt2;
            } else {
              tmp = i;
            }
        }
        if (cnt2 == lg){
            for (int i = 0; i <= lg; ++i){
                if ((s[i] == 'a') || (s[i] == 'o' )|| (s[i] == 'e') || (s[i] == 'i') || (s[i] == 'u') || (s[i] == 'e') ||
                    (s[i] == 'A') || (s[i] == 'O') || (s[i] == 'E') || (s[i] == 'I') || (s[i] == 'U') || (s[i] == 'E')){
                        ++cnt1;
                }
            }
            if (cnt1 >= k){
                cout << s << "\n";
            }
        } else if (cnt2 < lg){
            for (int i = tmp + 1; i <= lg; ++i){
                if ((s[i] == 'a') || (s[i] == 'o' )|| (s[i] == 'e') || (s[i] == 'i') || (s[i] == 'u') || (s[i] == 'e') ||
                    (s[i] == 'A') || (s[i] == 'O') || (s[i] == 'E') || (s[i] == 'I') || (s[i] == 'U') || (s[i] == 'E')){
                        ++cnt1;
                }
            }
            if (cnt1 >= k){
                for (int i = tmp + 1; i <= lg; ++i){
                    cout << s[i];
                }
            }
        }
    }
    return 0;
}
