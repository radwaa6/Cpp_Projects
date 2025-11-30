#include"bits\stdc++.h"
using namespace std;
int prime(long long num ){
    long long count=0;
  for(int i=2 ; i*i<=num ; i++){
    if(num%i==0){
        count++;
    }
  }
  if(count>0){
    return -1;
  }else{
    return 1;
  }
}
int main(){
 long long n;
 cin>>n;
 for(int i=2 ; i<=n ; i++){
    if(prime(i)==1){
        cout<<i<<" ";
    }
 }
}
