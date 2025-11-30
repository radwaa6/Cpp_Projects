#include"bits\stdc++.h"
using namespace std;
int main(){
double num;
cin>>num;
double frac=num-int(num);
if(frac>0){
    cout<<"float "<<int(num)<<" "<<frac<<"\n";
}else{
    cout<<"int "<<int(num)<<"\n";
}
}
