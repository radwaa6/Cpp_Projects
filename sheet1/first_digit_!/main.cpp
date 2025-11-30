#include"bits\stdc++.h"
using namespace std;
int main(){
 long long num;
 cin>>num;
 int d;
 for(int i=0 ; i<4 ; i++){
    d=num%10;
    num/=10;
 }
 if(d%2==0){
    cout<<"EVEN\n";
 }else{
    cout<<"ODD\n";
 }
}
