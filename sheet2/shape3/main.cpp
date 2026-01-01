#include"bits\stdc++.h"
using namespace std;
int main(){
int n;
cin>>n;
int spaces=n-1;
for(int i=1 ; i<=n ; i++){
    for(int x=1 ; x<=spaces ; x++){// 1 2 3
        cout<<" ";
    }
    for(int j=1 ; j<i*2 ; j++){
        cout<<"*";
    }
    spaces--;
 cout<<"\n";
}
spaces=1;
 for(int i=n ; i>=1 ; i--){
    for(int x=1 ; x<spaces; x++){// 1 2 3
        cout<<" ";
    }
    for(int j=i*2 ; j>1; j--){
        cout<<"*";
    }
    spaces++;
 cout<<"\n";
}
}
