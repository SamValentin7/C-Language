#include <iostream>

using namespace std;

int main()
{
    unsigned Z, N, O, S, P;
    double m;
    cout << "Note de 10=";
    cin >> Z;
    cout << "Note de 9=";
    cin >> N;
    cout << "Note de 8=";
    cin >> O;
    cout << "Note de 7=";
    cin >> S;
    cout << "Note de 4=";
    cin >> P;
    m = (double)(Z*10 + N*9 + O*8 + S*7 + P*4) / (Z + N + O + S + P);
    cout << "Nota medie este= " << m;
    return 0;
}
