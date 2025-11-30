#include"bits\stdc++.h"
using namespace std;
int main(){
long long num1,num2,num3;
cin>>num1>>num2>>num3;
long long max=0;
if(num1>=num2 && num1>=num3){
    max=num1;
    if(num2>num3){
        cout<<num3<<"\n"<<num2<<"\n"<<max<<"\n";
        cout<<"\n"<<num1<<"\n"<<num2<<"\n"<<num3<<"\n";
    }else{
        cout<<num2<<"\n"<<num3<<"\n"<<max<<"\n";
        cout<<"\n"<<num1<<"\n"<<num2<<"\n"<<num3<<"\n";
    }
}else if(num2>=num3 && num2>=num1){
       max=num2;
       if(num1>num3){
         cout<<num3<<"\n"<<num1<<"\n"<<max<<"\n";
         cout<<"\n"<<num1<<"\n"<<num2<<"\n"<<num3<<"\n";
       }else{
         cout<<num1<<"\n"<<num3<<"\n"<<max<<"\n";
         cout<<"\n"<<num1<<"\n"<<num2<<"\n"<<num3<<"\n";
       }
}else if(num3>=num2 && num3>=num1){
        max=num3;
        if(num1>num2){
            cout<<num2<<"\n"<<num1<<"\n"<<max<<"\n";
            cout<<"\n"<<num1<<"\n"<<num2<<"\n"<<num3<<"\n";
        }else{
            cout<<num1<<"\n"<<num2<<"\n"<<max<<"\n";
            cout<<"\n"<<num1<<"\n"<<num2<<"\n"<<num3<<"\n";
        }
}

}
