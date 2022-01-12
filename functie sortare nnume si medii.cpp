#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;

struct Elev {
  char nume[21];
  double medie;
};


void citire(int n, Elev elevi[30]){
    cout << "Nr. elevilor este : ";
    cin >> n;
    for (int i=0; i < n; ++i) {
        cout << "Numele elevului "<< i + 1 << " este: " << "  ";
        cin >> elevi[i].nume;
        cout << "Media elevului "<< i + 1 << " este: " << "  ";
        cin >> elevi[i].medie;
    }

    Elev aux;
    int m = n;
    while (m > 0){
        for (int i = 0; i < n-1; ++i){
            if (elevi[i].medie > elevi[i + 1].medie){
                aux = elevi[i];
                elevi[i] = elevi[i + 1];
                elevi[i + 1] = aux;
            }

            if (elevi[i].medie == elevi[i + 1].medie){
                if (strcmp(elevi[i].nume,elevi[i+1].nume) > 0){
                    aux = elevi[i];
                    elevi[i] = elevi[i + 1];
                    elevi[i + 1] = aux;
                }
            }
        }
     m = m-1;
    }
    for (int i = 0; i < n; ++i){
            cout << elevi[i].nume << "  " << elevi[i].medie << " " << "\n";
        }
    }

void sortare(int n, Elev elevi[30]){
    Elev aux;
    int m = n;
    while (m > 0){
        for (int i = 0; i < n-1; ++i){
            if (elevi[i].medie > elevi[i + 1].medie){
                aux = elevi[i];
                elevi[i] = elevi[i + 1];
                elevi[i + 1] = aux;
            }

            if (elevi[i].medie == elevi[i + 1].medie){
                if (strcmp(elevi[i].nume,elevi[i+1].nume) > 0){
                    aux = elevi[i];
                    elevi[i] = elevi[i + 1];
                    elevi[i + 1] = aux;
                }
            }
        }
     m = m-1;
    }
}

void afisareNou(int n, Elev elevi[30]){
    for (int i = 0; i < n; ++i){
            cout << elevi[i].nume << "  " << elevi[i].medie << " " << "\n";
        }
}

int main() {
    int n;
    Elev elevi[30];
        citire(n, elevi) ;
       // sortare(n, elevi);
       // afisareNou(n, elevi);
    return 0;
}
