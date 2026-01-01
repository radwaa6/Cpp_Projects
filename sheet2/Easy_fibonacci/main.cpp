#include"bits\stdc++.h"
using namespace std;
int main(){
int size;
cin>>size;
int start=0,second=1;
if(size==1){
    cout<<start;
}else if(size==2){
    cout<<start<<" "<<second;
}else{
cout<<start<<" "<<second<<" ";
for(int i=2 ; i<size ; i++){
    long long res=start+second;
    cout<<res<<" ";
    start=second;
    second=res;
}
}
}
