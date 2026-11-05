#include <bits/stdc++.h>
using namespace std;

using ll = long long;
int main()
{
	long long t;
	cin >> t; // Read the number of test cases
	while (t--)
	{	

		int n,k;
		cin>>n>>k;
		int a[n];
		int miniRemainder=INT_MAX;

		for(int i=0; i<n; i++){
			cin>>a[i];
		}


		// if(k==4){	
		// 	int remainder2=0;
		// 	for(int i=0; i<n; i++){
		// 		if(a[i]%2==0){
		// 			remainder2++;
		// 		}
		// 	}

		// 	if(remainder2>=2){
		// 		k=1;
		// 	}else if(remainder2==1){
		// 		k=2;
		// 	}

		// }

		

		for(int i=0; i<n; i++){
				if(a[i]%k==0){
				miniRemainder=0;
				break;
			}else if(a[i]<k){
				miniRemainder= min(k-a[i], miniRemainder);
			}else{
				miniRemainder= min(k-a[i]%k, miniRemainder);
			}
		}

		if(k==4){
			int miniRemainder2= 0	;
			k=2;
			int divisible2=0;


				for(int i=0; i<n; i++){
						if(a[i]%2==1){
							miniRemainder2++;
						}else{
							divisible2++;
						}
				}
			
			if(miniRemainder2>=2) miniRemainder2=2;

			if(divisible2==1 && miniRemainder2>=1) miniRemainder2=1; 

			if(divisible2>=2){
				miniRemainder2=0;
			}

			miniRemainder=min(miniRemainder2, miniRemainder);


		}

		

		cout<<miniRemainder;

		cout << endl; 

	}
	return 0;
}


