#include"bits\stdc++.h"
using namespace std;
int main(){
long long num1,num2,num3 ,num4, a,b,c,d;
cin>>num1>>num2>>num3>>num4;
 a=num1%100;
 b=num2%100;
 c=num3%100;
 d=num4%100;
 long res=(a*b*c*d)%100;
 if(res<=9){
    cout<<"0"<<res<<"\n";
     }else{
    cout<<res<<"\n";
     }
}
