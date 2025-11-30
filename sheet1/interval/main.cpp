#include"bits\stdc++.h"
using namespace std;
int main(){
    double num;
    cin>>num;
    if(num>=0 && num<=25){
        cout<<"Interval [0,25]\n";
    }else if(num>25 && num<=50){
        cout<<"Interval (25,50]\n";
    }else if(num>50 && num<=75){
        cout<<"Interval (50,75]\n";
    }else if(num>75 && num<=100){
        cout<<"Interval (75,100]\n";
    }else{
      cout<<"Out of Intervals\n";
    }
}
