#include"bits\stdc++.h"
using namespace std;
int main(){
long long n;
int a,b;
cin>>n>>a>>b;
long long sum=0;
for(int i=1 ; i<=n ; i++ ){
    if(i/10==0 ){
        if( i>=a && i<=b){
        sum+=i;
        }
    }else{
   long long my_number=i;
   int my_sum=0;
   while(my_number){
    int digit=my_number%10;
    my_sum+=digit;
    my_number/=10;
   }
   if(my_sum>=a && my_sum<=b){
    sum+=i;
   }
    }
}
cout<<sum<<"\n";
}
