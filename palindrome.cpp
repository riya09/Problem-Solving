/*
Check palindrome in a given string.
*/
#include <bits/stdc++.h>
using namespace std;
void isPalindrome(string s,int h,int l){
    int tmp=1;
    while(h<l){
        if(s[h]!=s[l]){
            cout<<"It is not a palindrome"<<'\n';
            return;
        }
        h--;
        l++;
    }
    cout<<"It is a palindrome"<<'\n';
}
int main(){
    string s;
    cin>>s;
    int h=s.length()-1,l=0;
    isPalindrome(s,h,l);

    return 0;
}
