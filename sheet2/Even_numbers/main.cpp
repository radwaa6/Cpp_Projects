#include"bits\stdc++.h"
using namespace std;
int main(){
long long num;
cin>>num;
long long count=0;
for(long long i=1 ; i<=num ; i++){
    if(i%2 == 0){
        cout<<i<<"\n";
        count++;
}
}
if(count==0){
    cout<<-1<<"\n";
}
}
