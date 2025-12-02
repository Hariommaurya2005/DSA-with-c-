#include<iostream>
using namespace std;
int main (){
    int a=1,b=2;
  if(a-->0 || ++b>2){
    cout<<"stage1 Inside If";
  }
  else{
    cout<<"stage2 Inside Else";
  }
  cout<<endl<<a<<" "<<b<<endl; // Output the values of a and b
}