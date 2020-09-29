#include <iostream>
#include<cmath>

using namespace std;

void Reynolds(double rho, double U,double D, double mu);

int main()

{
    double rho,U,D,mu;
    
    string first,second,third,fourth;
    
    first=" Please enter the value of density in SI units ";
    second=" Please enter the value of velocity in SI units ";
    third=" Please enter the value of Characteristic length in SI units ";
    fourth=" Please enter the value of dynamic viscosity in SI units ";
    
    cout<<"This is the code to caluclate the Reynolds number!!!"<<endl;
    
    cout<<first<<endl;
    cin>>rho;
    cout<<endl;
    
    cout<<second<<endl;
    cin>>U;
    cout<<endl;
    
    cout<<third<<endl;
    cin>>D;
    cout<<endl;
    
    cout<<fourth<<endl;
    cin>>mu;
    cout<<endl;
    
    // Calling Reynolds function
    Reynolds(rho,U,D,mu);
    
    return 0;
}

void Reynolds(double rho, double U,double D, double mu)
{
    cout<<"The Reynolds number for the case given is: "<<(rho*U*D)/mu<<endl;
}
    
