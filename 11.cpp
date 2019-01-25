#include <iostream>
using namespace std;
int main(){
int pr = 0;
int* x = new int[2];
int n;
cin>>n;
cin>>x[0];
for(int i = 0; i < n - 1; i++){                      
    cin>>x[1];
    if((x[0] < x[1]) && (x[1] / x[0] == 1)){
        pr = pr + 1;
    }
    x[0] = x[1];
}
cout<<pr;
return 0;
}
