




//   S T A C K   O P E R A T I O N

#include <iostream>
using namespace std;
int main()
{
  int n = 6;
  int arr[n];
  int top = -1;
  cout<<"Enter 3 elements "<<endl;
  for(int i = 0; i < 3; i++ ){
    top++;
    cin>>arr[top];
  }
  char ch;
  cout<<"Enter The operation to perform "<<endl;
  cin>>ch;
  
  switch(ch){
    case 'i' : 
      cout<<"Pushing"<<endl;
      top++;
      cin>>arr[top];
      break;
    case 'r' :
      top--;
      cout<<"Popped "<<endl;
      break;
    case 'h' :
      cout<<"Top element is "<<endl;
      cout<<arr[top];
      break;
    default :
      cout<<"Operation does not exist"<<endl;
      break;
      
  }
  
}
