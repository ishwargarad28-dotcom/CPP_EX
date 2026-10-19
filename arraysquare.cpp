#include<iostream>
using namespace std;
int main(){
  int num,arr[100],temp;
  cout<<"enter the array size :";
  cin>>num;
  cout<<"enter the arrray elements:";
  for(int i=0;i<num;i++){
    cin>>arr[i];
  }
  //bubble sort
  for (int i=0;i<num;i++){
    for(int j=0;j<num-i-1;j++){
      if(arr[j]<arr[j+1]){
      temp=arr[j];
      arr[j]=arr[j+1];
      arr[j+1]=temp;
    }
  }
  }
  cout<<" sorted array elements are :";
  for(int i=0;i<num;i++){
    cout<<arr[i]<<" ";
  }
  
return 0;
}