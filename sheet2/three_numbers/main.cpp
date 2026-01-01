#include"bits\stdc++.h"
using namespace std;
int main(){
int start , end;
cin>>start>>end;
long long counter=0;
for(int i=0 ; i<=start ;i++){
    for(int j=0 ; j<=start ; j++){
        if(end-i-j>=0 && end-i-j<=start){
            counter++;
        }
    }
}
cout<<counter<<"\n";
}
