#include <bits/stdc++.h>
using namespace std;

using ll = long long;
int main()
{
	long long t;
	cin >> t; // Read the number of test cases
	while (t--)
	{	

		int n;
		cin>>n;

		bool possible=true;
		int ans=0;
		
		while(n>1){
			if(n%6==0){
				n=n/6;
				ans++;
			}else if(n%6==3){
				n= n*2;
				n= n/6;
				ans+=2;
			}else{
				possible= false;
				break;
			}

		}

		if(possible==false){
			cout<<-1;
		}else{
			cout<<ans;
		}
		cout << endl; 

	}
	return 0;
}


