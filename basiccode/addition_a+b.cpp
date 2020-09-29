#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    
    double b=0.0;
    double a;
    int n;
    
    
    cout<<"This code will add n numbrs together!!"<<endl;
    cout<<"Enter the total numbers to be added: "<<endl;
    cin>>n;
    
    for (int i=0;i<n;i++)
    {
        cout<<"Enter the "<<i+1<<" number to be added: ";
        cin>>a;
        b=b+a;
    }
    
    cout<<" The sum of the all the numbers are : "<<b<<endl;
    
    return 0;
}
        
