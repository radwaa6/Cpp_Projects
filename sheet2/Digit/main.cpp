#include"bits\stdc++.h"
using namespace std;
int main(){
int t;
cin>>t;
long long num;
while(t>0){
    cin>>num;
    if(num==0){
        cout<<0<<"\n";
        t--;
        continue;
    }
    while(num>0){
        long long digit=num%10;
        num/=10;
        cout<<digit;
        if(num>0)cout<<" ";
    }
    cout<<"\n";
    t--;
}
}
