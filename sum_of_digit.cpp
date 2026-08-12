#include<iostream>
using namespace std;
int main(){
  int sum=0,n;
  cout<<"Enter the number :";
  cin>>n;
  n=abs(n);
  while(n>0){
    sum +=n %10;
    n/=10;
  }
  cout<<"sum of the digit : "<<sum;
  return 0;
}