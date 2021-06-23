#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;
 class NSR {
  public :
   void nsr(int arr[], int n){
    stack <int> s;
    vector <int> v;
    for(int i = n-1; i >= 0; i--){
     if(s.empty()){
      v.push_back(-1);
     }
     else
      if( s.size() > 0 && s.top() < arr[i]){
       v.push_back(s.top());
      }
     else
      if( s.size() > 0 & s.top() >= arr[i]){
       while( s.size() > 0 && s.top() >= arr[i]){
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
    }//end of for loop
   reverse(v.begin(), v.end());
   for(auto it : v){
    cout<<it<<" ";
   }
   cout<<endl;
   }//end of method
  
 };
 
 int main(){
  cout<<"Enter the size of the array"<<endl;
  int n;
  cin>>n;
  int arr[n];
  cout<<"Enter the values in the array"<<endl;
  for(int i = 0; i < n; i++){
   cin>>arr[i];
  }
  
  NSR obj;
  obj.nsr(arr, n);
 
 return 0;
 }
