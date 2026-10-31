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
		int a[n];

		int ii=0;
		int jj=-1;
		int kk=-1;
		for(int p=0; p<n; p++){
			cin>>a[p];
		}

		for(int i=1; i<n; i++){
			if(a[ii]> a[i] && jj==-1){
				ii=i;
				continue;
			}

			if(jj==-1 && a[i] > a[ii] ){
				jj=i;
				continue;
			}

			if( a[i] > a[jj]  && kk==-1){
				jj=i;
				continue;
			}

			if(a[i]< a[jj]){
				kk=i;
				break;
			}
		}

		if(kk==-1){
			cout<<"NO";
		}else{
			cout<<"YES"<<endl;
			cout<<ii+1<<" "<<jj+1<<" "<<kk+1;
		}
		cout << endl; 

	}
	return 0;
}


