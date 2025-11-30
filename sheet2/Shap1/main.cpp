#include"bits\stdc++.h"
using namespace std;
int main(){
long long num;
cin>>num;
for(int i=0 ; i<num ; i++){
    for(int j=num ; j>i ; j--){
        cout<<"*";
    }
    cout<<"\n";
}
}
