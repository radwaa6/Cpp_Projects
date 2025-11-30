#include"bits\stdc++.h"
using namespace std;
int main(){
int t;
cin>>t;
long long num1, num2, sum=0;
while(t>0){
cin>>num1>>num2;
if(num1>num2){
    for(int i=num2+1 ; i<num1 ; i++){
        if(i%2!=0){
            sum+=i;
        }
    }
    cout<<sum<<"\n";
sum=0;
}else{
    for(int i=num1+1 ; i<num2 ; i++){
        if(i%2!=0){
            sum+=i;
        }
    }
    cout<<sum<<"\n";
    sum=0;
}
t--;
}
}
