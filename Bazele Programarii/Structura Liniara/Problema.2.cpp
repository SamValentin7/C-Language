#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cout << "Dati un numar intreg:";
    cin >> a;
    cout << "Dati inca un numar intreg:";
    cin >> b;
    c = b;
    b = a;
    a = c;
    cout << "Valoarea primului numar va fi: "<< a << "\nIar al doilea va fi: " << b;
    return 0;
}
