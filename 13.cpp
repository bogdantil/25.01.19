#include <iostream>
using namespace std;
int main(){
int pr = 0;
int y;
int mxm = 0;
int* x = new int[5];
int n;
cin>>n;
for(int i = 0; i < 5; i++){
    cin>>x[i];
}
for(int i = 5; i < n; i++){             
    cin>>y;
    if(x[i % 5] > mxm){
        mxm = x[i % 5];
    }
    if(pr < mxm * y){
        pr = mxm * y;
    }
    x[i % 5] = y;
}
cout<<pr;
return 0;
}
