// GCD --> Greatest Common Divisor
#include"bits\stdc++.h"
using namespace std;
int main(){
long long num1 , num2;
 cin>>num1>>num2;
 long long max=0;
 if(num1>num2){
 for(int i=1 ; i<=num1 ; i++){
    if(num1%i==0 && num2%i== 0){
        if(i>max){
            max=i;
        }
    }

}

}else{
 for(int i=1 ; i<=num2 ; i++){
    if(num1%i==0 && num2%i== 0){
        if(i>max){
            max=i;
        }
    }
}

}
cout<<max<<"\n";
}
