#include"bits\stdc++.h"
using namespace std;
int main(){
 long long num1,num2,num3;
 char s,q;
 cin>>num1>>s>>num2>>q>>num3;
 switch(s){
   case'+':
       if(num1+num2==num3){
        cout<<"Yes\n";
       }else{
       cout<<num1+num2<<"\n";
       }
    break;
   case '-':
       if(num1-num2==num3){
        cout<<"Yes\n";
       }else{
        cout<<num1-num2<<"\n";
       }
    break;
   case'*':
    if(num1*num2==num3){
        cout<<"Yes\n";
    }else{
        cout<<num1*num2<<"\n";
    }
    break;
 }
}
