#include"bits\stdc++.h"
using namespace std ;
int main(){
 long long num;
 int count;
 cin>>num;
 for(int i=2 ; i<=num/2 ; i++){
    if(num%i==0){
        count++;
    }
 }
 if(num==1){
    cout<<"NO\n";
 }else{
 if(count>1){
    cout<<"NO\n";
 }else{
     cout<<"YES\n";
 }
 }
}
