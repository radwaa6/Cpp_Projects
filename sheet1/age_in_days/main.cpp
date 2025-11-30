#include"bits\stdc++.h"
using namespace std;
int main(){
long long days,years,remaining,months,re_days;
cin>>days;
    years=days/365;
    remaining=days%365;
    months=remaining/30;
    re_days=remaining%30;
    cout<<years<<" years\n"<<months<<" months\n"<<re_days<<" days\n";
}
