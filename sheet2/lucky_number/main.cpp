// which means numbers contains 4 or 7 or 4 and 7 together
#include"bits\stdc++.h"
using namespace std;
int lucky_number(long long n){
while(n>0){
    long long digit=n%10;
    if(digit!=4 && digit!=7){
        return-1;
    }
    n/=10;
}
return 1;
}
int main(){
long long num1 , num2;
cin>>num1>>num2;
int flag=0;
for(int i=num1 ; i<=num2  ; i++){
    if(lucky_number(i)!=-1){
        cout<<i<<" ";
        flag=1;
    }
}
if(flag==0){
    cout<<-1<<"\n";
}
}
