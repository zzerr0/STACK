//Program for nearest smaller to the left

#include <iostream>
#include <stack>
#include <vector>
using namespace std;

class NSL {
 public:
  void nsl(int arr[], int n){
   stack <int> s;
   vector <int> v;
   for(int i = 0; i < n; i++){
    if( s.empty()){
     v.push_back(-1);
    }
    else
     if( s.size() > 0 && s.top() < arr[i]){
      v.push_back(s.top());
     }
    else
     if(s.size() > 0 && s.top() >= arr[i]){
      //keep popig until we find the ans
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
   } //end of for loop
   
   for(auto it : v){
    cout<<it<<" ";
   }
   cout<<endl;
  } //end of method

};
int main()
{
 cout<<"Enter the size of the array"<<endl;
 int n;
 cin>>n;
 int arr[n];
 cout<<"Enter array elements"<<endl;
 for(int i = 0; i < n; i++){
  cin>>arr[i];
 }
 
 NSL obj;
 obj.nsl(arr, n);
 return 0;
}
