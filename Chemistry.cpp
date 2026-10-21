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
        int n, k;
        cin>>n>>k;

        string s;
        cin>>s;

        int hash[26]={0};
        for(int i=0; i<n; i++){
            hash[s[i]-'a']++;
        }
        int odd=0;
        for(int i=0; i<26 ; i++){
            if(hash[i]%2==1){
                odd++;
            }
        }

        // k= k- odd-1;
        // bool ans= false;


        // while(k>=0){
        //     k=
        // }

        if(odd>k+1) cout<<"NO";
        else cout<<"YES";


       


		
		cout <<endl; 
	}
	return 0;
}

