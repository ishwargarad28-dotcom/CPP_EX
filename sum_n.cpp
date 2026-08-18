#include<iostream>
using namespace std;
int sumN(int n){
 int sumN=0;
 for(int i=1;i<=n;i++){
  sumN += i ;
 }
 return sumN;
}
int main(){
  cout<<sumN(5)<<endl;

}