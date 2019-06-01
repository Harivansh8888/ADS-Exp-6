#include<iostream>
using namespace std;
class temperature
{
public:
float c;
temperature(float x)
{
c=x;
cout<<"Enter temperature in celcius:"<<endl;
cin>>c;
}
virtual void calculate()=0;
};

class fahrenhiet:public temperature
{
public:
fahrenhiet(float a):temperature(a){}
float f;
void calculate()
{
f=((c*9/5)+32);
cout<<"Temperature in fahrenhiet is:";
cout<<f<<endl;
}
};
class kelvin:public temperature
{

public:
kelvin(float a):temperature(a){}
float k;
void calculate()
{
k=c+273.15;
cout<<"Temperature in kelvin is:";
cout<<k<<endl;
}
};
