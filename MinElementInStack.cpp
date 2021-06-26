#include<iostream>
#include <stack>
using namespace std;

int main(){
 cout<<"Enter the size of stack"<<endl;
 int n;
 cin>>n;
 int arr[n];
 stack <int> mainStack, supportStack;
 cout<<"Enter the elements of stack"<<endl;
 for(int i = 0; i < n; i++){
  cin>>arr[i];
  mainStack.push(arr[i]);
 }
 
 
 //For Pushing 
 for(int i = 0; i < n; i++){
  if(supportStack.size() == 0 || arr[i] <= supportStack.top() ){
   supportStack.push( arr[i] );
  }
 }
 //For Popping and getting Minimu Element at Each Pop
  while(!mainStack.empty()){
  if( mainStack.top() == supportStack.top() && !supportStack.empty() ){
   mainStack.pop();
   cout<<"Min element is "<<supportStack.top()<<endl;
   supportStack.pop();
  }
  else
  if(!supportStack.empty()){
   mainStack.pop();
   cout<<"Min element is "<<supportStack.top()<<endl;
  }
 }
 

return 0;
}
