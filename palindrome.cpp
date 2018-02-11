/*
Check if a string is palindrome
*/
#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(string s,int h,int l){
    while(h>l){
        if(s[h]!=s[l]){
            return false;
        }
        h--;
        l++;
    }
    return true;
}
int main(){
    int h,l;
    string s;
    cin>>s;
    h=s.length()-1;
    l=0;
    if(isPalindrome(s,h,l)){
        cout<<"It is a palindrome"<<'\n';
    }
    else{
        cout<<"It is not a palindrome"<<'\n';
    }

    return 0;
}
