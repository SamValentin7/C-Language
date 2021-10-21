#include <iostream>

using namespace std;

int main()
{
    int m, b, t, s, i;
    int n;
    int pret;
    cout << "Pretul unui monitor=";
    cin >> m;
    cout << "Pretul unui bloc de sistem=";
    cin >> b;
    cout << "Pretul unei tastature=";
    cin >> t;
    cout << "Pretul unui mouse=";
    cin >> s;
    cout << "Pretul unei imprimante=";
    cin >> i;
    cout << "Numarul de calculatoare=";
    cin >> n;
    pret = n*(m + b + t + s + i);
    cout << "Pretul total este= " << pret;
    return 0;
}
