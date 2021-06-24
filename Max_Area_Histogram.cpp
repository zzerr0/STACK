
// M A X I M U M    A R E A   O F   H I S T O G R AM
#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
#include <climits>
using namespace std;
class Histogram {
 public :
  void histogramArea(int arr[], int n){
   vector <int> vecl;
   vector <int> vecr;
   vector <int> area;
   stack <pair<int,int> >  s;
   //finding the left nearlest element index
   for(int i = 0; i < n; i++){
    if(s.empty()){
     vecl.push_back(-1);
    }
    else
     if(s.size() > 0 && s.top().first < arr[i]){
       vecl.push_back(s.top().second);
     }
    else
     if( s.size() > 0 && s.top().first >= arr[i]){
      while( s.size() > 0 && s.top().first >= arr[i] ){
       s.pop();
      }
      if(s.empty()){
         vecl.push_back(-1);
      }
      else{
         vecl.push_back(s.top().second);
      }
     }
     
     s.push({arr[i], i});
   }//end of for loop
   while (!s.empty()) {
        s.pop();
    }
   //finding the right nearlest element index
   for(int i = n-1; i >= 0; i--){
    if(s.empty()){
     vecr.push_back(n);
    }
    else
     if(s.size() > 0 && s.top().first < arr[i]){
      vecr.push_back(s.top().second);
     }
    else
     if(s.size() > 0 && s.top().first >= arr[i]){
      while(s.size() > 0 && s.top().first >= arr[i]){
       s.pop();
      }
      
      if(s.empty()){
       vecr.push_back(n);
      }
      else{
       vecr.push_back(s.top().second);
      }
     }
     s.push({arr[i], i});
     
   }//end of Right smallest for loop
   
   reverse(vecr.begin(), vecr.end());
   
   for(auto itl : vecl){
    cout<<itl<<" ";
   }
   cout<<endl;
   for(auto itr : vecr){
    cout<<itr<<" ";
   }
   cout<<endl;
   int max = INT_MIN;
   cout<<"Outside for loop"<<endl;
    for(int i = 0; i < n; i++){
    area.push_back( ( vecr[i] - vecl[i] -1 ) * arr[i] ) ;
    if(area[i] > max){
     max = area[i];
    }
   }
   
   cout<<"Max area is "<<max<<endl;
   
  }//end of method

};

int main(){

 cout<<"Enter the size of the array "<<endl;
 int n;
 cin>>n;
 int arr[n];
 cout<<"Enter the histogram"<<endl;
 for(int i = 0; i < n; i++){
  cin>>arr[i];
 }
 
 Histogram obj;
 obj.histogramArea(arr, n);
 
return 0;
}
