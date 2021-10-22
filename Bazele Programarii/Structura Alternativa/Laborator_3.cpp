#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double l1, l2;
    double P, A, D;
    double n;
    cout << "Introduceti doua numere reale ";
    cin >> l1;
    cout << "Introduceti doua numere reale ";
    cin >> l2;
    cout << "Pentru afisarea perimetrului introduceti 1" << endl;
    cout << "Pentru afisarea ariei introduceti 2" << endl;
    cout << "Pentru afisarea diagonalei introduceti 3" << endl;
    cout << "Introduceti numarul= ";
    cin >> n, l1, l2;

    if (n == 1) {
        P = 2*(l1 + l2);
        cout << "\nPerimetrul este: " << P;
    }
    else if (n == 2){
        A = l1*l2;
        cout << "\nAria este: " << A;
    }

    else if (n == 3){
        D = (double)sqrt((l1 * l1) + (l2 * l2));
        cout << "\nDiagonala este: " << D;
    }
    else{
        cout << "\nEroare";
            }
    return 0;
}
