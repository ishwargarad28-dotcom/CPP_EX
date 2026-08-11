#include<iostream>
using namespace std;
int main (){
  int year;
  cout<<"Enter the Year :";
  cin>>year;
  if(year % 4==0){
    cout<<"LEAP YEAR";
  }
  else{
    cout<<"NOT LEAP YEAR";
  }
  return 0;
}