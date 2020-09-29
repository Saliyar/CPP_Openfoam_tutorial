#include<iostream>
#include<cmath>
#include<string>

using namespace std;

int main()
{
    
    double b=0.0;
    double a;
    int n;
    string first_statement,second_statement,third_statement;
    
    first_statement="This code will add n numbrs together!!";
    second_statement="Enter the total numbers to be added: ";
    third_statement=" The sum of the all the numbers are : ";
    cout<<first_statement<<endl;
    cout<<second_statement<<endl;
    cin>>n;
    
    for (int i=0;i<n;i++)
    {
        cout<<"Enter the "<<i+1<<" number to be added: ";
        cin>>a;
        b=b+a;
    }
    
    cout<<third_statement<<b<<endl;
    
    return 0;
}
        
