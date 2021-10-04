/*Problem : Write a program that computes the number of
miles you can drive a car given the estimate number
of miles per gallon and the number of gallons of gas
you purchesed as input data. Also compute and display
the cost of the gasoline based on the cost per gallon.*/

#include <iostream>

using namespace std;

int main()
{
    float miles_drivable, total_cost;

    float  mpg, gallons_in_tank, cost_of_gas;


    cout<<"Enter your average mpg : ";
    cin>>mpg;
    cout<<endl<<endl;
    cout<<"Enter the number of gallons in your tank : ";
    cin>>gallons_in_tank;
    cout<<endl<<endl;
    cout<<"Enter the average cost per gallon of gas : ";
    cin>>cost_of_gas;
    cout<<endl<<endl;

    miles_drivable = mpg * gallons_in_tank;

    total_cost = gallons_in_tank * cost_of_gas;

    cout<<"You are able to drive " <<miles_drivable<<"miles";
    cout<<endl<<endl;

    cout<<"The total cost will be $ " << total_cost;
    cout<<endl<<endl;
    system("pause");



    return 0;
}
