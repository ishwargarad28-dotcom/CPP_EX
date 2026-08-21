#include<iostream>
#include<cstring>
using namespace std;
  int main(){
    string str="hello";
    int start=0;
    int end = str.length()-1;
    while(start<end){
      swap(str[start],str[end]);
      start++;
      end--;
    }
    for(int i=0;i<str.length();i++){
      cout<<str[i]<<" ";
    }
    return 0;
  }
