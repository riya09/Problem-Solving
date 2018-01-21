#include <bits/stdc++.h>
using namespace std;
float solve(float a,float b,float c){
    float discrm= (b*b)-4*a*c;
    float x1,x2;
    if (discrm>=0){
        x1=(-b+sqrt(discrm))/(2*a);
        x2=(-b-sqrt(discrm))/(2*a);
    }
    else{
        float real_part=-b/(2*a);
        float img=sqrt(-discrm)/(2*a);
        
    }
}
int main(){

    return 0;
}
