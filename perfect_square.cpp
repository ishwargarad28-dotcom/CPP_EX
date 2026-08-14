#include<iostream>
#include<cmath>
using namespace std;
int main(){
  int n;
  cout<<"Enter Number : ";
  cin>>n;
  int root=sqrt(n);
  if(root*root==n){
    cout<<"Perfect Square.";
  }
  else{
    cout<<"Not Perfect Square.";
  }
  return 0;
}