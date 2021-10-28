#include <iostream>

using namespace std;

int main()
{
    double H1;
    double H2;
    double H3;
    cout << "Dati inaltimea lui Ionel: ";
    cin >> H1;
    cout << "Dati inaltimea lui Gigel:  ";
    cin >> H2;
    cout << "Dati inaltimea lui Danut:  ";
    cin >> H3;

    if(H1<=H2 && H1<=H3)
    {
        cout<<"Ionel, ";
        if(H2<=H3)
        {
            cout<<"Gigel, Danut.";
            return 0;
        }
        cout<<"Danut, Gigel.";
        return 0;
    }
    if(H2<=H1 && H2<=H3)
    {
        cout<<"Gigel, ";
        if(H1<=H3)
        {
            cout<<"Ionel, Danut.";
            return 0;
        }
        cout<<"Danut, Ionel.";
        return 0;
    }
    if(H3<=H2 && H3<=H1)
    {
        cout<<"Danut, ";
        if(H2<=H1)
        {
            cout<<"Gigel, Ionel.";
            return 0;
        }
        cout<<"Ionel, Gigel.";
        return 0;
    }
    return 0;
}
