#include"bits\stdc++.h"
using namespace std;
int main(){
char l;
cin>>l;
int ascii=l;
if(ascii>=65 && ascii<=90){
    ascii+=32;
    cout<<char(ascii)<<"\n";
}else if(ascii>=97 && ascii<=122){
    ascii-=32;
    cout<<char(ascii)<<"\n";
 }
}
