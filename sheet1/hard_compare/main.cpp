#include"bits\stdc++.h"
using namespace std;
int main(){
   long long num1,num2,num3,num4;
   cin>>num1>>num2>>num3>>num4;
  double x=num2*log(num1);
  double y=num4*log(num3);
   if(x>y){
    cout<<"YES\n";
   }else{
     cout<<"NO\n";
   }
}
