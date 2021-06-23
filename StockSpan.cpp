/*
Array
___________________________________
100 | 80 | 60 | 70 | 60 | 75 | 85 |
____|____|____|____|____|____|____|

Vector
-1, 0, 1, 1, 3, 1, 0
*/
#include <iostream>
#include <stack>
#include <vector>
using namespace std;

class StockSpan {
 public :
  void stockSpan(int arr[], int n){
     stack <pair<int, int>> s;
     vector <int> v;
     
     for(int i = 0; i < n; i++){
      if(s.empty()){
       v.push_back(-1);
      }
      else
       if(s.size() > 0 && s.top().first > arr[i]){
        v.push_back(s.top().second);
       }
      else
      if(s.size() > 0 && s.top().first <= arr[i]){
       while(s.size() > 0 && s.top().first <= arr[i]){
        s.pop();
       }
       if(s.empty()){
        v.push_back(-1);
       }
       else{
        v.push_back(s.top().second);
       }
      }
      s.push({arr[i], i});
     } // end of for loop
     
     for(int i = 0; i < n; i++){
      v[i] = abs(i - v[i]);
     }
     
     for(auto it : v){
      cout<<it<<" ";
     }
     cout<<endl;
  }

};

int main(){
 cout<<"Enter the size of the array"<<endl;
 int n;
 cin>>n;
 int arr[n];
 cout<<"Enter array elemets "<<endl;
 for(int i = 0; i < n; i++){
 cin>>arr[i];
 }
 StockSpan obj;
 obj.stockSpan(arr, n);
 
return 0;
}
