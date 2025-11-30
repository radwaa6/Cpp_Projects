#include"bits\stdc++.h"
using namespace std;
int main(){
long long num,n,even=0,pos=0,neg=0,odd=0;
cin>>num;
for(int i=0 ; i<num ; i++){
    cin>>n;
    if(n>0){
    pos++;
    if(n%2==0){
        even++;
    }else{
        odd++;
    }
    }else if(n<0){
       neg++;
    if(n%2==0){
        even++;
    }else{
        odd++;
    }
    }else if(n==0){
         even++;
    }
    }
    cout<<"Even: "<<even<<"\n";
    cout<<"Odd: "<<odd<<"\n";
    cout<<"Positive: "<<pos<<"\n";
    cout<<"Negative: "<<neg<<"\n";

}
