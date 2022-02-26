#include<iostream>
using namespace std;


class factorial
{

public:
//factorial using recursion
int fact(int n)
{


if(n==0)
return 1;
else
return n*fact(n-1);


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