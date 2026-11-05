#include <bits/stdc++.h>
using namespace std;

using ll = long long;
int main()
{
	long long t;
	cin >> t;
	while (t--)
	{	

		ll n;
		cin>>n;
		ll a[n];
		
		for(int i=0; i<n; i++){
			cin>>a[i];
			
		}

		sort(a,a+n);

		ll curr=a[0];
		ll tableCout=1;
		ll maxTableCount=1;
		ll currInd=2;
		for(int i=1; i<n; i++){
			if( a[i]==curr) tableCout++;

			else if(curr*currInd== ll (a[i])){
				tableCout++;
				currInd++;	
			}else{
				curr=a[i];
				tableCout=1;
				currInd=2;
			}
			maxTableCount= max(maxTableCount, tableCout);
			
		}



		ll ans= maxTableCount;
		cout<<maxTableCount;
		cout<<endl;


	}
	return 0;
}


