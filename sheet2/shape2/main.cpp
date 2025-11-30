#include"bits\stdc++.h"
using namespace std;
int main(){
 int num;
 cin>>num;
for(int i=1 ; i<=num ; i++){
    for(int j=i ; j<=num ; j++){
        if(j<num){
            cout<<" ";
        }
        if(j=num){
            cout<<"*";
        }
    }
    cout<<"\n";
}
 }
