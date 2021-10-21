#include <iostream>

using namespace std;

int main()
{
    int n;
    int div = 2;
    int exp = 0;
    cout << "Dati un numar:";
    cin >> n;
    while(n != 1)
    {
        while(n % div == 0)
        {
            exp++;
            n = n / div;
        }
        if(exp != 0)
            cout << div << " ^ " << exp << "\n";
        div++;
        exp = 0;
    }
    return 0;
}
