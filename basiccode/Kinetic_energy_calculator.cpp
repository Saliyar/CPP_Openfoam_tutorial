//////////////////////////////////////////////////////
/* This code gonna calucate kinetic energy and also 
 * showin the influence of division and pow() option
 */
#include<iostream>
#include<cmath>
#include<string>

using namespace std;

int main()
{
    double KE;
    int m,v;
    string first,second,third;
    
    first=" This is the code to calculate the Kinertic energy if you know mass and velocity";
    second ="Enter the mass(kg) :";
    
    cout<<first<<endl;
    cout<<second<<endl;
    
    cin>>m;
    third="Velocity (m/s): ";
    cout<<third<<endl;
    cin>>v;
    
    KE=(1.0/2.0)*m*pow(v,2);
    
    cout<<" The kinetic energy is found to be : "<<KE<<endl;
    
    return 0;
    
}
    
    
