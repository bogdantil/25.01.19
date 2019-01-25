#include <iostream>
using namespace std;
int main(){
int pr;
int y;
int min;
int* x = new int[5];
int n;
cin>>n;
for(int i = 0; i < 5; i++){
    cin>>x[i];
}
min = x[0];
cin>>y;
pr = min * y;
x[0] = y;
for(int i = 6; i < n; i++){         
    cin>>y;
    if(x[i % 5] < min){
        min = x[i % 5];
    }
    if(pr > min * y){
        pr = min * y;
    }
    x[i % 5] = y;
}
cout<<pr;
return 0;
}
