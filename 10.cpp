#include <iostream>
using namespace std;
int main(){
int pr = 1;
int x;
int n;
cin>>n;
for(int i = 0; i < n; i++){                         .
    cin>>x;
    if((x % 3 == 0) && (x % 2 == 1)){
        pr = pr * x;
    }
}
cout<<pr;
return 0;
}
