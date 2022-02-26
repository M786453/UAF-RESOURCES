#include <iostream>

using namespace std;


class que
    {

    private:
        int F,R;
        int QA[10];
    public:
        que()
        {
            F = -1;
            R = -1;
        }

        //member function to insert an item into queue
       void insertFun(int n){

        if(R>=9)
            {

                cout<<"Queue is full";

            }
            else
            {

                R++;
                QA[R] = n;
                if(F == -1)
                    F = 0;

            }
        }


         //member function to delete an item from queue

    int del()
    {

        int data;
        if(F==-1)
        {

            cout<<"Queue is empty";
            return NULL;
        }

        data = QA[F];
        if(F == R)
            F = R = -1;
        else
            F++;
        return data;


    }


    //member function to print data in queue

    void print()
    {

        if(F == -1)
        {

            cout<<"Queue is empty";

        }else{


        for(int i=F; i<=R; i++)
            cout<<QA[i]<<"\t";


        }


    }




    };






int main()
{

    que obj;
    int opt,val;

        while(opt!=3)
        {

            cout<<"\n\n1: Insert Item\n";
            cout<<"2: Delete Item\n";
            cout<<"3: Exit\n\n";
            cout<<"Enter the choice:";
            cin>>opt;

            switch(opt)
            {

            case 1:
                cout<<"Enter Value to Insert ?";
                cin>>val;
                obj.insertFun(val);
                cout<<"\nQueue after Insertion\n";
                obj.print();
                break;
            case 2:

                cout<<"\nValue "<<obj.del()<<" is deleted\n";
                cout<<"\nQueue after deletion\n";
                obj.print();


            }


        }




    return 0;
}
