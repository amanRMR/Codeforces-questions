#include <bits/stdc++.h>
using namespace std;

using ll = long long;
 
int main() {
    int t;
    cin >> t;

    while(t--) {
        int n,p;
        cin>>n>>p;
        int a[n];
        int b[n];
        vector<pair<int, int>> v;
        for(int i=0; i<n; i++){
            cin>>a[i];
        }

        for(int i=0; i<n; i++){
            cin>>b[i];
            v.push_back({b[i],a[i]});
        }

        sort(v.begin(), v.end(), [](auto a, auto b) {
            return a.first < b.first;
        });

        ll ans=0;
        int currCostToshare= 0;
        
        if(v[0].first < p ){
            ans=p;
            for(int i=1; i<n;){
                int canShareTo= v[currCostToshare].second;
                if(p>v[currCostToshare].first){
                    ans += 1LL * min(canShareTo, n-i) * v[currCostToshare].first;
                    i= i+ min(canShareTo, n-i);
                    currCostToshare++;
                }else{
                    ans = ans + 1ll*(n-i)*p;
                    break;
                }
                
            }


        }else{
            ans=1ll*p*n;
        }

        
        cout<<ans;


        cout<<endl;
    }

    return 0;
}