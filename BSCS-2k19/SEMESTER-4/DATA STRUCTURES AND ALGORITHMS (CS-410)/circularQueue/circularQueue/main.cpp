
//program to insert and delete items from a circular queue

#include <iostream>

using namespace std;




class CircularQueue{

private:

    int F,R;
    int CQ[10];

public:

    CircularQueue()//constructor to initialize F & R
    {

        F=-1;
        R=-1;

    }

    void cqInsert(int);

    int del(void);

    void print(void);

};


int main()
{

   CircularQueue obj;
   int opt,val;
    while(opt!=3)
    {

        cout<<"\n\n1: Insert Item\n";
        cout<<"2: Delete Item\n";
        cout<<"3: Exit\n";
        cout<<"Enter the choice:";
        cin>>opt;

        switch(opt)
        {

        case 1:
            cout<<"\nEnter Value to insert ? ";
            cin>>val;
            obj.cqInsert(val);
            cout<<"\nQueue after insertion\n";
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

//member function to add items
void CircularQueue::cqInsert(int n)
{

    //F=-1,0
//R=-1,0,1,2,4,5,6,7,8,9,10
//CQ[10] => 2,1,3,4,5,6,7,8,9,10

    if(F==0 && R==8)
    {

        cout<<"Circular Queue is full";

    }

    if(F==-1)
        F=R=0;
    else if(R==9)
        R=0;
    else
        R++;

    CQ[R] = n;

    if(F==-1)
        F=0;

}


int CircularQueue::del()
{


    int data;
    if(F==-1)
    {

        cout<<"Circular Queue is empty";

        return NULL;
    }

    data = CQ[F];
    if(F==R)
        F=R=-1;
    else if(F==9)
        F==0;
    F++;

    return data;

}


//member function to print items

void CircularQueue::print()
{

    if(F==-1)
    {

        cout<<"Queue is empty";


    }
    else
    {

    for(int i=F;i<=R;i++)
        cout<<CQ[i]<<"\t";

    }




}
