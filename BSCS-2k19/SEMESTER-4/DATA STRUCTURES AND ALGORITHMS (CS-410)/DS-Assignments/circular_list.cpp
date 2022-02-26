#include<iostream>
using namespace std;


struct node
{
int data;
node *link;
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
     start->data = n; 
     start->link = NULL;
    }
    else
    {
     cur = start;
     
     //go to end of list
     while(cur->link!=NULL)
           cur = cur->link;
        
        
     //create and add new nodes at end
     temp = new node;
     temp->data = n;
     temp->link = NULL;
     cur->link = temp;
    }
    
    
    }
    
    
    void make_list_circular()
    {
    cur = start;
    
    //go to end of list
 
    while(cur->link!=NULL)
         cur = cur->link;
    
    cur->link = start;
       }
    
    
    
    
    void print()
    {
     cout<<"\nData in Link List:\n\n";
     cur=start;
     while(cur->link!=NULL)
      {
       cout<<cur->data<<endl;
       cur=cur->link;
       }
    
    //print last node value
     cout<<cur->data<<endl;
    }
};

int main()
{
    list obj;
    int val;
    cout<<"Enter five values \n";
    for(int i=1;i<=5;i++)
    {
    
     
    
    cin>>val;
     obj.append(val);
     if(i==5)
    {
     obj.make_list_circular();
    }
     
    }
    obj.print();
    return 0;
}