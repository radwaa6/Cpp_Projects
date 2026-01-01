#include"bits\stdc++.h"
using namespace std;
int main(){
int num;
cin>>num;
long long count=1;
for(int i=1 ; i<=num ; i++){
    if(count%4==0){
        count++;
         i--;
        continue;
    }
    cout<<count<<" ";
    count++;
    cout<<count<<" ";
    count++;
    cout<<count<<" ";
    cout<<"PUM\n";
    count++;

}
}
