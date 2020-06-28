#include<iostream>
using namespace std;

class node 
{
  public:
  int data;
  node *next;
};

class STACK
{
  public:
    node *top;
    
    STACK()
    {
      top = NULL;
    }
    
    void push(int);
    void display(); 
};

void STACK::push(int userData)
{
 node *newnode = new node();
 
 newnode->data = userData;
 if(top == NULL)
 {   
   newnode->next = NULL;
   top = newnode;
 }

 else 
 {
   newnode->next = top;
   top = newnode;
 }
}

void STACK :: display()
{
  if(top == NULL)
  {
    cout<<"STACK IS EMPTY "<<endl;
  }
  else
  {
   node *temp = top;
   while(temp->next != NULL)
   {
    cout<<temp->data<<endl;
    cout<<"^"<<endl;
    cout<<"|"<<endl;
    
    temp = temp->next;
   }
   /*below code is used to shoe the data of last node
   because when top reaches to last node the value
   of temp will be NULL 
   therefore we'll use this code to show the data of 
   last node 
   */
   cout<<temp->data<<endl;
   cout<<"^"<<endl;
   cout<<"|"<<endl;
      cout<<"NULL"<<endl;
  }
}
int main()
{
  STACK stackobj;
  cout<<"How many elements you want to enter \n"
  <<"give the input "<<endl;
  int n;
  cin>>n;
  int userData;
  for(int i = 0; i < n; i++)
  {
    cin>>userData;
    stackobj.push(userData);
  }
  cout<<endl;
  cout<<"The Stack Using Linked List is "<<endl;
  cout<<endl;
  stackobj.display();
  return 0;
}
