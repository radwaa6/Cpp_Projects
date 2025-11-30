#include"bits\stdc++.h"
using namespace std;
int main(){
char l;
cin>>l;
int ascii=l;
if(ascii>=48 && ascii<=57){
    cout<<"IS DIGIT\n";
}else if(ascii>=65 && ascii<=90){
    cout<<"ALPHA\nIS CAPITAL\n";
}else if(ascii>=97 && ascii<=122){
    cout<<"ALPHA\nIS SMALL\n";
}
}
