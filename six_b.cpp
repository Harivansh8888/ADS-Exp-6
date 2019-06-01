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
