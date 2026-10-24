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
		string s;
		cin>>s;

		int longestConsecutive=0;
		int currCosecutive=0;
		for(int i=1; i<n; i++){
			if(s[i]==s[i-1]){
				currCosecutive++;
				longestConsecutive=max(longestConsecutive, currCosecutive);

			}else{
				currCosecutive=0;
			}
		}

		cout<<longestConsecutive+2;
		cout<< endl;
	}
	return 0;
}


