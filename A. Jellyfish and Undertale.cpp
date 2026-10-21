#include <bits/stdc++.h>
using namespace std;



int main()
{
	int t; // Number of test cases
	cin >> t;
	while (t--)
	{
        int a,b, n;
        cin>>a>>b>>n;
        int x[n];

        for(int i=0; i<n; i++){
            cin>>x[i];
        }
        
        // sort(x, x+n);

        long long ans=0;
        ans= ans+ b-1;

        for(int i=0; i<n; i++){
            if(x[i]+1 <= a) ans+= x[i];
            else ans+= a-1;
        }

        ans++;
        cout<<ans;
		cout <<endl; 
	}
	return 0;
}

