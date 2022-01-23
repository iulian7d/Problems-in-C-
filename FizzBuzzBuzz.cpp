#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(){
    int n, m;
    string s[100];
    cin >> n >> m;
    for (int i = n; i <= m; ++i){
        s[i] = to_string(i);
		if ((i % 15 == 0)){
            s[i] = "FizzBuzz";
		} else if (i % 5 == 0){
		    s[i] = "Buzz" ;
		} else if (i % 3 == 0){
			s[i] = "Fizz";
		}
    }
    for (int i = n; i <= m; ++i){
        cout << s[i] << ",";
    }

return 0;
}
