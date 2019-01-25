#include <iostream>
using namespace std;
int main(){
int liftm = 0;
int lift = 0;
int* x = new int[2];
int n = 1;
cin>>x[0];
while(x[0] != 0){
    cin>>x[1];               
    n++;
    if((x[0] < x[1])){
        lift = lift + x[1] - x[0];
    }
    else{
        if(lift > liftm){
            liftm = lift;
            lift = 0;
        }
        else{
            lift = 0;
        }
    }
    x[0] = x[1];
}
cout<<n<<" numbers have received ";
cout<<"Highest lift height is "<<liftm;

return 0;
}
