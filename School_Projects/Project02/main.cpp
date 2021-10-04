#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    //exemplu 1
    //Să se elaboreze algoritmul care calculează suma S=1+1*2+1*2*3+…+1*2* …*n.
    unsigned int n, i, j, s, p;

    cout<<"Introdu n= ";
    cin>>n;
    s=0;
    for (i=1; i<=n; i++){
        p=1;
        for(j=1; j<=i;j++)
            p *= j;
        s += p;
    }
    cout<<"Suma = "<<s<<endl;



    return 0;
}
