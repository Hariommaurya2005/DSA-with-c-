#include<iostream>
using namespace std;    

int power(int a,int b){
    int result=1;
    for(int i=1;i<=b;i++){
        result=result*a;
    }
    return result;
}
int main(){
    int a,b;
    cout<<"Enter base and exponent: ";
    cin>>a>>b;
    cout<<a<<" raised to the power "<<b<<" is "<<power(a,b)<<endl;
    return 0;
}