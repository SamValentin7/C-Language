//solve f=[k*a*(t1-t2)/b
#include <iostream>

using namespace std;

int main()
{
    float f, k, a, t1, t2, b;

    cout<<"Enter the value for k : ";
    cin>>k;
    cout<<endl<<endl;
    cout<<"Enter the value for a : ";
    cin>>a;
    cout<<endl<<endl;
    cout<<"Enter the value for t1 : ";
    cin>>t1;
    cout<<endl<<endl;
    cout<<"Enter the value for t2 : ";
    cin>>t2;
    cout<<endl<<endl;
    cout<<"Enter the value for b : ";
    cin>>b;
    cout<<endl<<endl;

    f = ((k * a) * (t1-t2)) / b;

    cout<<"The value for f : " <<f<<endl<<endl;



    return 0;
}
