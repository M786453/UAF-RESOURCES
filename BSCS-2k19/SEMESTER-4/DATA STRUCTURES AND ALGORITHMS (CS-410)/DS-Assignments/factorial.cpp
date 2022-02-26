#include<iostream>
using namespace std;


class factorial
{

public:
//member function to compute factorial
int fact(int n)
{

int f=1;
if(n==0)
return f;
else
for(;n>1;n--)
f = f * n;
return f;


}




};



int main()
{
    factorial obj;
    int val;
    cout<<"\nEnter Number To Find Factorial ? ";
    cin>>val;
    cout<<val<<"! = "<<obj.fact(val)<<"\n";
    return 0;
}