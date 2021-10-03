#include <iostream>

using namespace std;

int main()
{
    int n=9;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n-i+1; j++)
        {
            cout<<(char)(n-i+j+64)<<" ";
        }
        cout<<endl;
    }


    return 0;
}
