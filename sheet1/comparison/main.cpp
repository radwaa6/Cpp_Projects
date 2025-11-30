#include"bits\stdc++.h"
using namespace std;
int main(){
    int num1,num2;
    char s;
    cin>>num1>>s>>num2;
   if(num1>num2){
    if(s=='>'){
        cout<<"Right\n";
    }else{
        cout<<"Wrong\n";
    }
   }else if(num1<num2){
       if(s=='<'){
        cout<<"Right\n";
       }else{
        cout<<"Wrong\n";
       }
   }else if(num1==num2){
        if(s=='='){
        cout<<"Right\n";
        }else{
        cout<<"Wrong\n";
        }
   }

}
