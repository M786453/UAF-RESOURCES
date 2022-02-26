#include <iostream>

using namespace std;


class stack
    {

    private:
        int top;
        int S[10];
    public:

        stack()
        {
            top=-1;
        }

        void push(int n);

        int pop(void);

        void print(void);

    };


int main()
{

   stack obj;
   int opt,val;
        while(opt!=3)
        {

            cout<<"\n1: Push\n";
            cout<<"2: Pop\n";
            cout<<"3: Exit\n";
            cout<<"Enter the choice:";
            cin>>opt;


            switch(opt)
            {

            case 1:
                cout<<"\nEnter Value to insert ? ";
                cin>>val;
                obj.push(val);
                cout<<"\nStack after Insertion\n";
                obj.print();
                break;

            case 2:

                int data = obj.pop();
                if(data!=NULL){
                cout<<"\nValue "<<data<<" is popped\n";
                cout<<"\nStack after deletion\n";
                obj.print();
                }else{
                cout<<"\nStack is empty";
                }
                break;

            }

        }
    return 0;
}


void stack::push(int n)
{

    if(top==9)
    {
        cout<<"Stack Overflow\n";
    }
    else
    {
        top++;
        S[top] = n;
    }

}


int stack::pop()
{

    int data=NULL;
    if(top==-1)
    {

        cout<<"Stack Underflow\n";
    }
    else
    {

        data = S[top];
        top--;
    }

    return data;
}


void stack::print()
{

    if(top==-1)
    {

     cout<<"\nStack is empty";

    }else{
    for(int i=top;i>=0;i--)
        cout<<S[i]<<endl;
    }

}

