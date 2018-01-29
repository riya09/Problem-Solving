/*
Find a^b%c using fast modular exponentiation.
*/
#include <bits/stdc++.h>
using namespace std;
#define ll int long long
ll fast_mod(ll a,ll b,ll c){
    if(b==0){
        return 1;
    }
    else if(b%2==0){
        int d=fast_mod(a,b/2,c);
        return (d*d)%c;
    }
    else{
        return ((a%c)*fast_mod(a,b-1,c))%c;
    }
}
int main(){
    ll a,b,c;
    cin>>a>>b>>c;
    cout<<fast_mod(a,b,c)<<'\n';
    return 0;
}
