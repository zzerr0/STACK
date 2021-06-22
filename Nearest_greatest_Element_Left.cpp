#include <iostream>
#include <stack>
#include <vector>
using namespace std;

class Ngl{
 public:
  void ngl(int arr[], int n){
   stack <int> s;
   vector <int> v;
   
   for(int i = 0; i < n; i++){
    if( s.empty()){
     v.push_back(-1);
    }
    else
     if( s.size() > 0 && s.top() > arr[i]){
      v.push_back(s.top());
     }
    else
     if( s.size() > 0 && s.top() <= arr[i]){
      //we will start poping until we get size = 0 or a greater elemnt
      while( s.size() > 0 && s.top() <= arr[i]){
       s.pop();
      }
      
      if(s.empty()){
       v.push_back(-1);
      }
      else{
       v.push_back(s.top());
      }
     }
    
    s.push(arr[i]);
   }
   //end of for loop
   for(auto i : v){
    cout<<i<<" ";
   }
   cout<<endl;
  }
  // end of function ngl
};

int main(){
 cout<<"Enter the sixe of the array"<<endl;
 int n;
 cin>>n;
 int arr[n];
 cout<<"ENter the elements of the arrray"<<endl;
 for(int i = 0; i < n; i++){
  cin>>arr[i];
 }
 
 Ngl obj;
 obj.ngl(arr, n);

return 0;
}
