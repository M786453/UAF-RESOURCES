#include <iostream>

using namespace std;



class exp
{

private:
    char st[100],stack[15],ch;
    int top;
public:

    exp()
    {

        top=-1;

    }


    void input()

    {

        cout<<"\nEnter Expression without space ? ";
        cin>>st;


    }


    void scan(void);
    void push(void);
    void pop(void);



};



int main()
{
    exp s1;
    s1.input();
    s1.scan();
    return 0;
}


void exp::scan()
{

    for(int i=0;st[i]!='\0';i++)
    {

        ch = st[i];

        if(ch=='('
                 || ch=='*'
                 || ch=='/'
                 || ch=='+'
                 || ch=='-'
                 || ch==')')
        {


            if(ch=='('){
                push();
            }
            else if(stack[top]=='(')
            {
                push();
            }
            else if(ch==')')
            {

                pop();

            }
            else if(stack[top]=='+' ||
                    stack[top]=='-' &&
                    (ch=='*' || ch=='/'))
            {

                push();

            }
            else if(top==-1)
            {

                push();

            }
            else
            {

            pop();
            push();

            }
        }else{

        cout<<ch<<" ";

        }

    }
    pop();
}


void exp::push(void)
{

    top++;
    stack[top]=ch;

}


void exp::pop(void)
{


    while(top!=-1)
    {

        if(ch==')')
        {

            cout<<stack[top]<<" ";
            top--;
            if(stack[top]=='(')
            {
             top--;
             break;
            }

        }
        else
        {

            cout<<stack[top]<<" ";
            top--;
            if(stack[top]=='(')
                break;

        }


    }

}


