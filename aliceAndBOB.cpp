#include <bits/stdc++.h>
using namespace std;

using ll = long long;
int main()
{
	long long t;
	cin >> t; // Read the number of test cases
	while (t--)
	{	

		string s;
		cin>>s;

		int one=0;
		int zero=0;
		int ans=0;
		int n= s.size();

		for(int i=0; i<n; i++ ){
			if(s[i]=='0') zero++;
			if(s[i]=='1') one++;
		}
		
		ans= min(one, zero);
		if(ans%2==0){
			cout<<"NET";
		}else{
			cout<<"DA";
		}
		 
		cout << endl; 

	}
	return 0;
}


