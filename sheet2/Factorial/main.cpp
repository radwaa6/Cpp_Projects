#include"bits\stdc++.h"
using namespace std;
int main(){
int t, n;
long long fact=1; // overflow-->int
cin>>t;
while(t!=0){
        fact=1;
        cin>>n;
    for(int i=1 ; i<=n ; i++ ){
        fact=fact*i;
    }

    cout<<fact<<"\n";
    t--;
}
}
