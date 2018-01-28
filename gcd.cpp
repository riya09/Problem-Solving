/*
Find GCD of two integers.
*/
#include <bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
    if (b!=0){
        return gcd(b,a%b);
    }
    else{
        return a;
    }
}
int main(){
    int a,b,tmp;
    cin>>a>>b;
    if (b>a){
        tmp=a;
        a=b;
        b=tmp;
    }
    if(a<0)a*=-1;
    if(b<0)b*=-1;
    cout<<gcd(a,b)<<'\n';
    return 0;
}
