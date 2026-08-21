#include<iostream>
#include<iostream>
using namespace std;
int main(){
  string str;
  cout<<"Enter The String : ";
  cin>>str;
  string original;
  original = str;
  int start=0;
  int end=str.length()-1;
  while(start<end){
    swap(str[start],str[end]);
    start++;
    end--;
  }
  cout<<"Reverse String : "<<str<<"\n";
  if(original==str){
    cout<<"Palindrome";
  }
  else{
    cout<<"Not Palindrome";
  }
  return 0;
}