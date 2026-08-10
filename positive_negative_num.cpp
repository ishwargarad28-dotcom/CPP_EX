#include<iostream>
using namespace std;
int main(){
  int num;
  cout<<"Enter the mumber :";
  cin>>num;
  if(num>0){
    cout<<"Number is Positive.";
  }
  else if(num<0){
    cout<<"Number is Negative.";
  }
  else{
    cout<<"Not Positive Not Negative.";
  }
  return 0;
}