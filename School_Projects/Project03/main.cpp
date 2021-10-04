#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    //exemplu 3
    /* Se citesc numere naturale până la întâlnireanumărului 0.
    Să se afișeze toate perechile denumere citite consecutiv,
    cu proprietatea că al doilea număr reprezintă restul împărțirii primului număr la suma cifrelor sale.*/
   unsigned int n, m, s, k;
   cout<<"Introduceti numerele naturale pana la 0"<<endl;
   cin>>n;
   while (n!=0){
    cin>>m;
    k = n;
    s=0;
    while (k!=0){
        s += k % 10;
        k /= 10;
    }
    if (n % s ==m)
    cout<<"Perechea:"<<n<<" "<<m;
    n = m;
   }



   return 0;
}
