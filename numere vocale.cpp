#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main() {
  char sir[100];
  cin.getline(sir,100);
  int x = 0;
  int n = strlen(sir);
  for (int i = 0; i < n; ++i){
    if (sir[i] == 'a' || sir[i] == 'o' || sir[i] == 'i' || sir[i] == 'e' ||
        sir[i] == 'u' || sir[i] == 'A' || sir[i] == 'O' || sir[i] == 'I' ||
        sir[i] == 'E' || sir[i] == 'U' ) {
            ++x;
        }
  }
    cout << x ;
  return 0;
}
