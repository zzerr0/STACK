#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
 cout<<"Enter size"<<endl;
 int n;
 cin>>n;
 int arr[n];
 cout<<"Enter the height of the buildings"<<endl;
 for(int i = 0; i < n; i++){
  cin>>arr[i];
 }
 //maximum element to the left
 int maxl =  arr[0];
 int arrl[n];
 for(int i = 0; i < n; i++){
  if(arr[i] > maxl){
   maxl = arr[i];
  }
  arrl[i] = maxl;
 }
 int maxr =  arr[n-1];
 int arrr[n];
 for(int i = n-1; i >= 0; i--){
  if(arr[i] > maxr){
   maxr = arr[i];
  }
  arrr[i] = maxr;
 }
 
 int sum = 0;
 for(int i = 0; i < n; i++){
  sum = sum + min(arrl[i], arrr[i]) - arr[i];
 }
 cout<<"Water that can be harvested is "<<sum<<endl;
return 0;
}
