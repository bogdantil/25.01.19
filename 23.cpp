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
    y = 0;
    while(x != 0){
            y++;
            x = x / 10;
    }
    D[y]++;
}
for(int i = 0; i < 10; i++){
    if(max < D[i]){
        max = D[i];
    }
}
for(int i = 9; i >= 0; i--){
    if(max == D[i]){
       cout<<i<<" "<<D[i];
       return 0;
    }
}
return 0;
}
