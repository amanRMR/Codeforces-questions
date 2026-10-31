#include <bits/stdc++.h>
using namespace std;

int main()
{
	
	long long a = 1;
	
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin>>n;

		int p[n];
		int ans=-1;
		for(int i=0; i<n; i++){
			cin>>p[i];
			if( ans == -1 && p[i]-i -1 != 0) ans= abs(p[i]-i -1);

			ans = __gcd(ans, abs(p[i]-i -1) );



		}

		
		

		cout<<ans;
		cout<< endl;
	}
	return 0;
}


