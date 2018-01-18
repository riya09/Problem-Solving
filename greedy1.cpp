/*
Fact Digit Sum
Source:GeekForGeeks
Let's define A(n) for positive integer n as a sum
of factorials of its digits. For example, A(154)=1!+ 5! +4!= 145.
*/

#include <bits/stdc++.h>
using namespace std;
#define MAX 100000
int main(){
    int long long fact[10],num,j,hold[MAX],k=-1;
    cin>>num;
    fact[0]=1;
    for(int i=1;i<=9;i++){
        fact[i]=fact[i-1]*i;
    }
    j=9;
    while(num>0){
        if(fact[j]>num)j--;
        else{
            num-=fact[j];
            hold[++k]=j;
        }
    }
    for(int i=k;i>=0;i--)cout<<hold[i];
    cout<<'\n';
    return 0;
}
