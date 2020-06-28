#include<iostream>
using namespace std;
#define n 10
class STACK
{
  public:
  int stack[n], top = -1;
  void push(int);
  void peek();  
  void pop();
};

void STACK :: push(int stackData)
{
 
 if(top == n-1)
 {
   cout<<"The stack is full \n";
 } 
 else
 {
   top++;
   stack[top] = stackData;
 }
 
 
}

void STACK :: pop()
{
  if(top == -1)
  {
   cout<<"Stack is empty "<<endl;
  }
  
  else 
  {
    cout<<"The removed element is "<<stack[top]<<endl;
    top--;
  }
  
}

void STACK::peek()
{
  int temp = top;
  cout<<"The stack elements are : "<<endl;
  for(int i=temp; i>=0; i--)
  {
   cout<<stack[i]<<endl;
  }
}


int main()
{
  STACK stackobj;
  cout<<"How many elements you want to enter "<<endl;
  int elementno ;
  cin>>elementno;
  int element;
  cout<<"Enter the "<<elementno<<" elements into the stack"<<endl;
  for(int i=0; i<elementno; i++)
  {
    cin>>element;
    stackobj.push(element);
  }
  stackobj.peek();
  return 0;
}
