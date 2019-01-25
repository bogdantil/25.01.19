#include <iostream>
using namespace std;
int main(){
int pro = 0;
int prd = 0;
int x;
int maxo = 1;
int maxd = 1;
int* y = new int[6];          
int n;
cin>>n;
for(int i = 0; i < 6; i++){
    cin>>y[i];
}
for(int i = 6; i < n; i++){
    cin>>x;
    if((y[i % 6] % 2 !=  maxo % 2) && (maxo % 2 == maxd % 2)){
        maxd = y[i % 6];
    }
    if((y[i % 6] % 2 == maxo % 2) && (y[i % 6] > maxo)){
        maxo = y[i % 6];
    }
    if((y[i % 6] % 2 == maxd % 2) && (y[i % 6] > maxd)){
        maxd = y[i % 6];
    }

    if((pro < maxo * x) && ((x % 2 == 0) || (maxo % 2 == 0))){
        pro = maxo * x;
    }
     if((prd < maxd * x) && ((x % 2 == 0) || (maxd % 2 == 0))){
        prd = maxd * x;
    }
    y[i % 6] = x;
}
if((prd == 0) && (pro == 0)){
    cout<<"-1";
    return 0;
}
if(pro > prd){
    cout<<pro;
}
if(pro <= prd){
    cout<<prd;
}
return 0;
}
