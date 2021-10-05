#include <iostream>

using namespace std;

int main()
{
    //exemplu 4

    unsigned long long n;
    int s;
    cout<<"Introduceti numarul natural: ";
    cin>>n;
    while (n > 10){
        s = 0;
        while (n > 10){
            s += n % 10;
            n /= 10;
        }
        if (s / 10 ==0)
            cout<<"Suma calculata = "<<s;
        else
            n = s;
    }

    return 0;
}
