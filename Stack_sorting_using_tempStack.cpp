#include<iostream>
#include<stack>
using namespace std;
int main()
{
  //n=no. of elements in stack
  //el=element of stacks
  int n, el;
  //declaring two stacks original & temporary
  stack<int> ostack /* original stack */, tstack /* temporary stack */;
  cout<<"\n Enter No. of elements of stack"<<endl;
  cin>>n;
  for(int i=0;i<n;i++)
  {
    cin>>el;
    ostack.push(el);
  }
  
  //sorting stack
  while(!ostack.empty())
  {
    int k=ostack.top();
    ostack.pop();

    while(!tstack.empty() && tstack.top()<k)
    {
      /*
minimum elements remains on the top of sorted stack
  
k=4
elements will pop from temporary stack if 
top elements of stack is smaller than 4 
|3|
|2|
|8|
in above example elements will pop upto 2 
since 3 & 2 are smaller than 4 

  
*/
    ostack.push(tstack.top());
    tstack.pop();
    }
    tstack.push(k);
  }
  
  while(!tstack.empty())
  {
    cout<<tstack.top()<<" ";
    tstack.pop();
  }
  cout<<endl;
  
  return 0;
}

