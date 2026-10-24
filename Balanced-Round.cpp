#include <bits/stdc++.h>
using namespace std;

int main()
{
	
	long long a = 1;
	
	int t;
	cin >> t;
	while (t--)
	{
		int n,k;
		cin>>n>>k;

		int a[n];
		for(int i=0; i<n; i++){
			cin>>a[i];

		}
		
		sort(a, a+n);

		int consecutiveMax=0;
		int currConsecutive=0;
		for(int i=1; i<n; i++){

			if(abs(a[i]-a[i-1]) <= k) currConsecutive++;
			else currConsecutive=0;

			consecutiveMax= max(consecutiveMax, currConsecutive);
		}

		cout<<n-consecutiveMax-1;
		cout<< endl;
	}
	return 0;
}


