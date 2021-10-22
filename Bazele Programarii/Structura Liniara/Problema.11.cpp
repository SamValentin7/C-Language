#include <iostream>

using namespace std;

int main()
{
    int a, b;
    int S, D, P;
    double C;
    cout << "Introduceti primul numar=";
    cin >> a;
    cout << "Introduceti al doilea numar=";
    cin >> b;
    S = a + b;
    D = a - b;
    P = a*b;
    cout << "Suma numerelor este= " << S <<'\n';
    cout << "Diferenta numerelor este= " << D <<'\n';
    cout << "Produsul numerelor este= " << P <<'\n';
     if (b != 0) {
        C = (double) a / (double) b;
        cout << "Catul numerelor este= " << C <<'\n';
    }
    else{
        cout << "Eroare, Impartirea la 0!" << endl;
    }
    return 0;
}
