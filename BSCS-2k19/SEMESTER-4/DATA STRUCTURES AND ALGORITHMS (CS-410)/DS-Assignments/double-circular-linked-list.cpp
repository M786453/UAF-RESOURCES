#include<iostream>
using namespace std;


struct node
{
int data;
node *n;
node *p;
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
    
    
    void make_list_circular()
    {
    cur = start;
    
    //go to end of list
 
    while(cur->n!=NULL)
         cur = cur->n;
    
    cur->n = start;
    start->p = cur;
       }
    
    
    
    
    void print()
    {
     cout<<"\nData in Link List (Reverse order):\n\n";
     cur=start;
     while(cur->n!=start)
      {
       
       cur=cur->n;
       }
 
     node *last = cur;
    
    while(cur->p!=last)
    {
    
    cout<<cur->data<<endl;
    cur = cur->p;
    
    }
    
    //print first node's data
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