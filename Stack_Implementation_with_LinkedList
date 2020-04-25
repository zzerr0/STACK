#include <iostream>
using namespace std;

class node
{
  public:
  int data;
  node *next;
};

class stack 
{
  node *top;
  public:
    stack()
    {
      top=NULL;
    }
    void insert(int);
    void display();
};
void stack::insert(int d)
{
  node *newnode= new node();
  newnode->data=d;
  newnode->next=top;
  top=newnode;
}

void stack::display()
{
  node *it=new node();
  it=top;
  while(it!=NULL)
  {
    cout<<"\t"<<it->data;
    cout<<endl;
    cout<<"\t↓";
    cout<<endl;
    it=it->next;
  }
  cout<<"\tNULL"<<endl;
}

int main()
{
 stack obj;
 obj.insert(6);
 obj.insert(7);
 obj.insert(8);
 obj.insert(9);
 obj.insert(10);
 obj.insert(11);
 obj.display();
 return 0;
}
