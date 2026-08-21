#include<iostream>
#include<string>
using namespace std;
int main(){
  string str;
   
  cout<<"Enter the String : ";
  // cin>>str; --> this is not print the line they will print one word.
  getline(cin,str); 

  cout<<"output string : "<<str<<endl;
  return 0;
}