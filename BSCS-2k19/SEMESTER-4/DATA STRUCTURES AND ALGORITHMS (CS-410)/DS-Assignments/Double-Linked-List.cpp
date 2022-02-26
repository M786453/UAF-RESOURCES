#include<iostream>
using namespace std;


struct node
{
    int data;
    node *p;
    node *n;
};


class list
{

private:
    node *start,*cur,*temp;
public:
    list()
    {
        start = NULL;
    }


    //member function to create and
    //data into list
    void append(int n)
    {
        if(start==NULL)
        {
            start = new node;
            start->p = NULL;
            start->data = n;
            start->n = NULL;
            temp = start;
        }
        else
        {
            node *prev;

            cur = start;

            //go to end of list
            while(cur->n!=NULL)
                cur = cur->n;


            //create and add new nodes at end
            prev = temp;
            temp = new node;
            temp->p = prev;
            temp->data = n;
            temp->n = NULL;
            cur->n = temp;
        }

    }


    void print()
    {
        cout<<"\nData in Link List:\n\n";
        if(start==NULL)
        {
            cout<<"\nList is Empty.\n";
        }
        else
        {
            cur=start;
            while(cur->n!=NULL)
            {
                cout<<cur->data<<endl;
                cur=cur->n;
            }

            //print last node value
            cout<<cur->data<<endl;
            
            //print list in reverse
            cout<<"\nList In Reverse Order\n";
            while(cur->p!=NULL)
            {
                cout<<cur->data<<endl;
                cur = cur->p;
            }
            
            //print first node's data
            cout<<cur->data<<endl;
        }

    }
    
    
    
    
    
    

    int count()
    {
        int c = 0;
        if(start!=NULL)
        {
            c = 1 ;

            cur = start;

            while(cur->n!=NULL)
            {

                c = c+1;
                cur = cur->n;

            }

        }




        return c;
    }


    void insert_beg(int n)
    {
        //insert at the beginning

        temp = new node;
        temp->p = NULL;
        temp->data = n;
        temp->n = start;
        
        start->p = temp;
        
        start = temp;

    }



    void insert_sp(int n,int pos)
    {
        //insert at specified position
        bool canInsert = true;

        cur = start;

        for(int i=1; i<pos-1; i++)
        {
            cur = cur->n;
            if(cur==NULL)
            {
                cout<<"\nInvalid Position\n";
                canInsert = false;



                break;
            }
        }

        if(canInsert)
        {

            node *next;
            next = cur->n;
            temp = new node;
            temp->p = cur;
            temp->data = n;
            temp->n = next;
            cur->n = temp;
            next->p = temp;

        }

    }


    void del(int n)
    {

        bool isDataFound = false;

        cur=temp=start;

        while(cur->n!=NULL)
        {

            if(cur->data = n)
            {

                cout<<"\nData Found and Deleted\n";
                temp->n = cur->n;
                delete cur;
                isDataFound = true;
                break;

            }

            temp = cur;
            cur = cur->n;


        }

        if(!isDataFound)
            cout<<"\nData Not Found\n";

    }

};
int main()
{
    list obj;
    int val,opt;
    while(opt!=5) {
        cout<<"\nChoose the operation:\n";
        cout<<"1.Insert\n";
        cout<<"2.Count\n";
        cout<<"3.Delete\n";
        cout<<"4.Print\n";
        cout<<"5.Exit\n";
        cin>>opt;
        switch(opt)
        {
        case 1:
            int n,choice;
            cout<<"Enter the no. of Elements You want to Insert:\n";
            cin>>n;

            cout<<"\nChoose the operation:\n";
            cout<<"\n1.Insert At End\n";
            cout<<"\n2.Insert At Beginning\n";
            cout<<"\n3.Insert At Specific Position\n";
            cout<<"\n4.Exit\n";
            cin>>choice;




            switch(choice)
            {

            case 1:
                //insert at end

                for(int i=1; i<=n; i++)
                {
                    cout<<"Insert a Value\n";
                    cin>>val;
                    obj.append(val);
                }



                break;

            case 2:

                //insert at beginning

                for(int i=1; i<=n; i++)
                {

                    cout<<"Insert a Value\n";
                    cin>>val;
                    obj.insert_beg(val);
                }



                break;


            case 3:

                for(int i=1; i<=n; i++)
                {
                    int position;
                    cout<<"Insert a Value\n";
                    cin>>val;
                    cout<<"\nPosition Of Insertion\n";
                    cin>>position;
                    obj.insert_sp(val,position);
                }
            }






            break;

        case 2:

            cout<<"Size: "<<obj.count()<<endl;

            break;

        case 3:
            int del_no;
            cout<<"\nEnter Value You Want To Delete\n";
            cin>>del_no;

            obj.del(del_no);

            break;


        case 4:

            obj.print();

            break;

        }
    }



    return 0;
}