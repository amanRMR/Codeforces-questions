#include <bits/stdc++.h>
using namespace std;


using ll = long long;


int main()
{
	long long t;
	cin >> t; // Read the number of test cases
	while (t--)
	{

		ll n,k,b,s;
		cin>>n>>k>>b>>s;

		if(s>= k*b && s<= k*b + (k-1)*n){

			ll ans[n];

			ans[0]= b*k + min(k-1, s-b*k);

			s= s- b*k - min(k-1, s);


			for(int i=1; i<n; i++ ){
				
				if(s<=0){
					ans[i]=0;
					continue;
				}
				ans[i]=  min(k-1, s);
				s=s- min(k-1, s);
			}

			for(int i=0; i<n; i++){
				cout<<ans[i]<<" ";
			}


		}else{
			cout<<-1;
		}
		
		cout<<endl;
		
	}
	return 0;
}

