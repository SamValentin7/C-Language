#include <iostream>

using namespace std;

int main()
{
    int x, s, p;
    int Suma;
    cout << "Dobanda anuala pe procente:";
    cin >> p;
    cout << "Numarul de ani:";
    cin >> x;
    cout << "Suma depusa:";
    cin >> s;
    Suma = s*(p/100)*x;
    cout << "Suma de bani pentru client = " << Suma;
    return 0;
}
