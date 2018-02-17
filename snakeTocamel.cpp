/*Program to convert snake_case letters to camelCase*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    string snakestr,camelstr;
    cin>>snakestr;
    for(int i=0;i<snakestr.length();i++){
        if(snakestr[i-1]=='_' && i>0){
            if(snakestr[i]>='a' && snakestr[i]<='z')camelstr+=snakestr[i]-'a'+'A';
            else camelstr+=snakestr[i];
        }
        else if(snakestr[i]!='_')camelstr+=snakestr[i];
    }
    snakestr=camelstr;
    cout<<snakestr<<'\n';
    return 0;
}
