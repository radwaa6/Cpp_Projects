#include"bits\stdc++.h"
using namespace std;
int main(){
    long long N,nums;
    cin>>N;
    long long max=0;
    while(N!=0){
      cin>>nums;
        if(nums>max){
            max=nums;
        }
        N--;
    }
    cout<<max<<"\n";
}

