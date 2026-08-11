#include<iostream>
using namespace std;
int main(){
  int A,B,C;
  cout<<"Enter A :";
  cin>>A;
  cout<<"Enter B :";
  cin>>B;
  cout<<"Enter C :";
  cin>>C;
  if (A>B & A>C){
    cout<<"A is Greater num "<<A;
  }
  else if(B>A & B>C){
    cout<<"B is Greater num "<<B;
  }
  else{
    cout<<"C is Greater num "<<C;
  }
  return 0;
}