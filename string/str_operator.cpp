#include<iostream>
#include<cstring>
using namespace std;
int main(){
  string str1 ="Ishwar";
  string str2 ="Ishwar";
  string str3;
  str3=str1+str2;
  cout<<str3<<endl;
  cout<<(str1==str2)<<endl;
  cout<<str1.length()<<endl;

  return 0;
}