//Problem : Determine the total cost of apples given the number of
//pounds of apples purchased and the cost per pound of apples.

#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    float total_cost, lbs_of_apples, cost_per_lb;

    cout<<"Enter the number of pounds of apples : ";
    cin>>lbs_of_apples;
    cout<<endl<<endl;

    cout<<"Enter the cost per pound : $ ";
    cin>>cost_per_lb;
    cout<<endl<<endl;

    total_cost = lbs_of_apples * cost_per_lb;

    cout<<"The total cost is : $ "<<total_cost<<endl<<endl;

    Sleep(5000);


    return 0;
}
