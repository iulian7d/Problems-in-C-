#include <iostream>
#include <cstring>
using namespace std;

int main() {
  char s1[101];
  char s2[101];
  cin.getline(s1,101);
  cin.get(s2,101);
  int n = strlen(s1), m = strlen(s2), x = 0;
  for (int i = 0; i < n; ++i){
        x = 0;
     if ( s1[i] == s2[0]){
        for  (int j = 0; j < m; ++j)
            if (s1[j+i] == s2 [j]){
                ++x;
            }
        if (x == m){
            cout << "DA";
            break;
        }
    }
  }
  if (x == 0){
        cout << "NU";
  }
  return 0;
}
