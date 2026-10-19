#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; 
    cin >> t;
    while (t--)
    {
        long long n; // Length of the array
        cin >> n;
        
        int a[n];
        int tws=0;
        int mini=-1;
        int maxi=-1;
        for(int i=0; i<n; i++){
            cin>>a[i];
            if( mini==-1 || a[mini]>a[i]) mini=i;
            if( maxi==-1 || a[maxi]<a[i]) maxi=i;
        }

        vector<int> v(a, a + n);
        v.push_back(a[0]);
        int j=1;
        int ans=0;

        for(int i=1; i<n; i++){
            if(a[i-1]%2==0 && a[i]%2==0){
                v[j]= v[j]*a[i];
                ans++;
            }else if(a[i-1]%2==1 && a[i]%2==1){
                v[j]= v[j]*a[i];
                ans++;
            }else{
                v.push_back(a[i]);
                j++;
            }
        }


        cout<<ans;




        cout<<endl;
    }
    return 0;
}
