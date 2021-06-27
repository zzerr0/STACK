#include <iostream>
#include <stack>
using namespace std;
int main()
{
 cout<<"Enter the size of the stack ";
 int n, el, min = 0;
 cin>>n;
 stack <int> s;
 for(int i = 0; i < n; i++){
  if(s.empty()){
   cin>>el;
   s.push(el);
   min = el;
  }
  else{
   cin>>el;
   if(el < min){
    s.push( (2*el) - min);
    min = el;
   }
   else{
    
    s.push(el);
   }
  }
 }// end of for loop for pushing
 
 
 while(s.size() > 0){
  if( s.top() >= min ){
   cout<<"Top -> "<<s.top()<<" Min ->"<<min<<endl;
   s.pop();
  }
  if( s.size() > 0 && s.top() < min ){
   min = 2 * min - s.top();
   cout<<"Top -> "<<s.top()<<" Min ->"<<min<<endl;
   s.pop();
  }
 }
 
return 0;}
