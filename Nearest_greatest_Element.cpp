#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;
class NRG{
 public :
  void findNrg(int arr[], int n){
   vector <int> v;
   stack <int> s;
   
   //traversing from right
   for(int i = n-1; i >= 0; i--){
    if(s.empty()){
     v.push_back(-1);
    }
    else
     if(s.size() > 0 && s.top() > arr[i]){
      v.push_back(s.top());
     }
    else
     if(s.size() > 0 && s.top() <= arr[i]){
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
   
   reverse(v.begin(), v.end());
   //end of for loop
   for(auto j : v){
    cout<<j<<" ";
   }
   
   
 }
};
int main(){
 
 cout<<"Enter the size of the array ";
 int n;
 cin>>n;
 int arr[n];
 for(int i = 0; i < n; i++){
  cin>>arr[i];
 }
 NRG obj;
 obj.findNrg(arr, n);

return 0;
}
