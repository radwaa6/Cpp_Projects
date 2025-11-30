#include"bits\stdc++.h"
using namespace std;
int main(){
long long num;
cin>>num;
long long origin=num;
long long rev=0;
while(num>0){
    long long digit=num%10;
    rev=rev*10+digit;
    num/=10;
}
cout<<rev<<"\n";
if(rev==origin){
    cout<<"YES\n";
}else{
    cout<<"NO\n";
}
}
