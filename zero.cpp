/*Write an algorithm such that if an element in an MxN
 matrix is 0, its entire row and column is set to 0.*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    int m,n,arr[100][100],row[100],col[100];
    cin>>m>>n;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
            if(arr[i][j]==0){
                row[i]=1;
                col[j]=1;
            }
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(row[i]==1 ||col[j]==1){
                arr[i][j]=0;
            }
            cout<<arr[i][j]<<" ";
        }
        cout<<'\n';
    }
    return 0;
}
