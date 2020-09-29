#include <iostream>
#include <cmath>
#include <string>

double vector_length(double x, double y, double z);

int main()
{
    double x,y,z;
    std::cout<<"This is the code to estimate the vactor length!!"<<std::endl;
    std::string first,second,third;
    
    first="Enter the x magnitude of vector";
    second="Enter the y magnitude of vector";
    third="Enter the z magnitude of vector";
    
    std::cout<<first<<std::endl;
    std::cin>>x;
    std::cout<<second<<std::endl;
    std::cin>>y;
    std::cout<<third<<std::endl;
    std::cin>>z;
    
    std::cout<<"The length of the vector is :"<<vector_length(x,y,z)<<std::endl;
    
    return 0;
    
}

double vector_length(double x, double y, double z)
{
    double l;
    l=sqrt(pow(x,2)+pow(y,2)+pow(z,2));
    return l;
}
    
