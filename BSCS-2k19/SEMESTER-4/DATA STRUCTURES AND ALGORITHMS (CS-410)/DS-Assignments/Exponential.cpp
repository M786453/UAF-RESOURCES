#include <iostream>

using namespace std;


class exponent
{

public:
    //member function to find exponential
    int power(int b, int n)
    {

        if(n==0)
            return 1;
        else
            return b*power(b,n-1);

    }

};


int main()
{
    exponent obj;
    int val,p,res;
    cout<<"\nEnter Value ? " ;
    cin>>val;
    cout<<"\nEnter power ? " ;
    cin>>p;
    res = obj.power(val,p);
    cout<<"Result is = "<<res;
    return 0;
}
