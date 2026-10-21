#include <bits/stdc++.h>
using namespace std;

// Arrays to represent the possible directions a knight can move
int dx[4] = {-1, 1, -1, 1}, dy[4] = {-1, -1, 1, 1};

int main()
{
	int t; // Number of test cases
	cin >> t;
	while (t--)
	{
        long long n, k, x;
        cin>>n>>k>>x; 
       
        long long mini=0;
        long long maxi= 0;
        for(int i=0; i<k; i++) {
            maxi= (n-i)+maxi;
            mini= i+1 + mini;
        }

        if( x>=mini && x<=maxi) cout<<"YES";
        else cout<<"NO";
        


		
		cout <<endl; 
	}
	return 0;
}

