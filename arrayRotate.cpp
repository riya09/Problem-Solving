/*Given an array, cyclically rotate the array clockwise.
m->number of rotations
n->size of array
 */
#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[100],n,m,tmp;
    cin>>m>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<m;i++){
        tmp=arr[0];
        for(int j=0;j<n-1;j++){
            arr[j]=arr[j+1];
        }
        arr[n-1]=tmp;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
