#include<iostream>
using namespace std;    

int main(){
    for(int i=0; i<2; i++){
        cout<<"HI"<<endl;
        cout<<"Hey"<<endl;
        continue;
        cout<<"Bye"<<endl;  // unreachable code
    }
}