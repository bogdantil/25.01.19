#include <iostream>
using namespace std;
int main()
{
int n;
int x;
int y;
int max;               
max = 0;
int* D = new int[10];
for(int i = 0; i < 10; i++){
    D[i] = 0;
}
cin>>n;
for(int i = 0; i < n; i++){
    cin>>x;
    while(x != 0){
            y= x % 10;
            D[v]++;
            x = x / 10;
    }
}
for(int i = 0; i < 10; i++){
    if(max < D[i]){
        max = D[i];
    }
}
for(int i = 9; i >= 0; i--){
    if(max == D[i]){
       cout<<i<<" ";
    }
}
return 0;
}
