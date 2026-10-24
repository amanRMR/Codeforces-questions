#include <bits/stdc++.h>
using namespace std;

int main()
{
	
	long long a = 1;
	
	int t;
	cin >> t;
	while (t--)
	{
		int n,q;
		cin>>n>>q;

		int a[n];

		for(int i=0; i<n; i++){
			cin>>a[i];
		}

		vector<int> prefixSum(n);
		vector<int> suffixSum(n);

		prefixSum[0] = 0;
		suffixSum[n-1] = 0;

		for(int i=1; i<n; i++){
			prefixSum[i]= prefixSum[i-1] + a[i-1];
			suffixSum[n-i-1] = suffixSum[n-i] + a[n-i];
		}
		vector<vector<int>> queries(q);

		for(int i=0; i<q; i++){
			int l,r,k;
			cin>>l>>r>>k;
			queries[i].push_back(l);
			queries[i].push_back(r);
			queries[i].push_back(k);
		}

		for(int i=0; i<q; i++){
			int l,r,k;

			l=queries[i][0]-1;
			r=queries[i][1]-1;
			k=queries[i][2];

		  int sum = prefixSum[l] + suffixSum[r] + (r-l+1)*k;

			if(sum%2==0) cout<<"NO";
			else cout<<"YES";

			cout<<endl;


		}
		
	}
	return 0;
}


