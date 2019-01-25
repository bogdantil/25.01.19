#include <iostream>

using namespace std;

int main()
{
	int a = 0, b = 0, sum = 0, n, min = 0;
	cin >> n;
	for(int i = 0; i < n; i++)
	{                                        
		cin >> a;
		if((a % 6 != 0) && (b == 0)){
            min = a;
            b = 1;
		}
		sum = sum + a;
	}
	if((sum % 6 == 0) && (min == 0))
	{
		cout<<"n = 0, sum = 0";
		return 0;
	}
	if((sum % 6 == 0) && (min != 0))
	{
	    sum = sum - min;
		cout<<"n = "<<n - 1<<", sum = "<<sum;
		return 0;
	}
	if(a % 6 != 0)
	{
	cout<<"n = "<<n<<", sum = "<<sum;
	}
	return 0;
}
