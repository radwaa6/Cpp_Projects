#include"bits\stdc++.h"
using namespace std;
int main(){
int t;
cin>>t;
for(int i=1 ; i<=t ; i++){
    int ones=0;
    int num;
    cin>>num;
    while(num){
       if(num%2==1){
        ones++;
       }
       num/=2;
    }
long long sum=0;
for(int z=0 ; z<ones ; z++){
    sum+=1*pow(2,z);
}
cout<<sum<<"\n";
}
}
