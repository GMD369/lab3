#include <iostream>
using namespace std;
main()
{
int n,w,h,completewall;
cout<<"Number of square meters you can paint: ";
cin>>n;
cout<<"Width of the single wall (in meters): ";
cin>>w;
cout<<"Height of the single wall (in meters): ";
cin>>h;
completewall=n/(w*h);
cout<<"Number of walls you can paint: "<<completewall;
}