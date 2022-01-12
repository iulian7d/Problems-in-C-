#include <iostream>

using  namespace std;

int main() {
    int h1, m1, x;
    cin >> h1 >> m1 >> x;
    int h2, m2;

    m2 = m1 + (x % 60);
    h2 = h1 + (x / 60);

	if (m2 > 60){
		m2 = m2 - 60;
		h2 = h2 + 1;
	}

	if (h2 > 24){
		h2 = h2  % 24;
	}

    cout << h2 << " " << m2;

    return 0;
}

