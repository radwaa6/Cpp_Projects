#include"bits\stdc++.h"
using namespace std;
int main(){
int num1,num2;
long long sum=0;
while(1){
        cin>>num1>>num2;
if(num1>0 && num2>0){
    if(num1>num2){
    for(int i=num2 ; i<=num1 ; i++){
        sum+=i;
        cout<<i<<" ";
    }
    cout<<"sum ="<<sum<<"\n";
    sum=0;
    }else{
    for(int i=num1 ; i<=num2 ; i++){
        sum+=i;
        cout<<i<<" ";
    }
    cout<<"sum ="<<sum<<"\n";
    sum=0;
    }
}else{
break;
}
}
}
