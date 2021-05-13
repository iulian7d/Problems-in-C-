#include <iostream>
using namespace std;

int main() {
    int A,B,C;
    cin >> A >> B >> C;

    if ((A >= B)&&(B>=C)) {
      cout << C <<" "<<B<<" "<<A;
      }
     else if ((A >= C)&&(C>=B)){
      cout <<B <<" "<<C<<" "<<A;
      }
      else if ((B >= C)&&(C>=A)){
      cout <<A<<" "<<C<<" "<<B;
      }
      else if ((B >= A)&&(A >= C)){
      cout <<C <<" "<<A<<" "<<B;
      }
      else if ((C >= A)&&(A>=B)){
      cout <<B<<" "<<A<<" "<<C;
      }
      else if ((C >= B)&&(B >= A)){
      cout <<A <<" "<<B<<" "<<C;
      }

    return 0;
}
