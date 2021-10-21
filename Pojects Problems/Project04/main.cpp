/*Problem : Calculate the estimated cost of a
trip given the distance of the trip the estimated
number of miles per gallon, and
the everage cost of a gallon of gasoline*/

#include <iostream>

using namespace std;

int main()
{
     float cost_of_trip;

     float distance_of_trip, mpg, cost_per_gallon;

     cout<<"Enter the distance of the trip in miles : ";
     cin>>distance_of_trip;
     cout<<endl<<endl;
     cout<<"Enter your average mpg : ";
     cin>>mpg;
     cout<<endl<<endl;
     cout<<"Enter the average cost per gallon of gas : $ ";
     cin>>cost_per_gallon;
     cout<<endl<<endl;

     cost_of_trip = (distance_of_trip / mpg) * cost_per_gallon;

     cout<<"This trip will cost you "<<cost_of_trip<< " dollars ";
     cout<<endl<<endl;



    return 0;
}
