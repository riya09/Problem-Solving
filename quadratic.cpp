/*
Given coefficients of a quadratic equation,find the solution.
*/
#include <bits/stdc++.h>
using namespace std;
void solve(float a,float b,float c){
    float discrm= (b*b)-4*a*c;
    float x1,x2;
    if (discrm>=0){
        x1=(-b+sqrt(discrm))/(2*a);
        x2=(-b-sqrt(discrm))/(2*a);
        cout<<x1<<","<<x2<<'\n';
    }
    else{
        x1=-b/(2*a);
        x2=sqrt(-discrm)/(2*a);
        cout<<x1<<"+"<<x2<<"i"<<'\n';
        cout<<x1<<"-"<<x2<<"i"<<'\n';

    }
}
int main(){
    float a,b,c;
    cin>>a>>b>>c;
    solve(a,b,c);
    return 0;
}
