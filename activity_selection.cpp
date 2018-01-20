/*
given n activities with their start and finish times. Select the maximum number
 of activities that can be performed by a single person, assuming that a
 person can only work on a single activity at a time.
*/
#include <bits/stdc++.h>
using namespace std;
#define MAX 100000
struct Activity{
    int start;
    int finish;
};

bool compare(Activity lhs, Activity rhs) { return lhs.finish < rhs.finish; }
int main(){
    Activity lst[MAX];
    int n,j;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>lst[i].start>>lst[i].finish;
    }
    sort(lst,lst+n,compare);
    j=0;
    cout<<"Selected Activities"<<'\n';
    cout<<lst[j].start<<" "<<lst[j].finish<<'\n';
    for(int i=1;i<n;i++){
        if(lst[i].start>=lst[j].finish){
            j=i;
            cout<<lst[i].start<<" "<<lst[i].finish<<'\n';
        }
    }
    return 0;
}
