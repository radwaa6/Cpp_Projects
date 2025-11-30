#include"bits\stdc++.h"
using namespace std;
int main(){
long long num1,num2;
char l;
cin>>num1>>l>>num2;
switch(l){
case'+':
    cout<<num1+num2<<"\n";
    break;
case'-':
    cout<<num1-num2<<"\n";
    break;
case'*':
    cout<<num1*num2<<"\n";
    break;
case'/':
    cout<<num1/num2<<"\n";
    break;
}
}
