#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int k;
    int x, y, z;
    cout << "Introduceti un numar natural:";
    cin >> k;
    x = k / 3600;
    y = (k % 3600) / 60;
    z = (k % 3600) % 60;
    cout << "Ore:" << x << " Minute: " << y << " Secunde: " << z;
    return 0;
}
