#include <bits/stdc++.h>
using namespace std;

using ll = long long;
 
int main() {
    int t;
    cin >> t;

    while(t--) {
        
        int n,k,q;
        cin>>n>>k>>q;
        int a[n];
        for(int i=0; i<n; i++) cin>>a[i];

        int currConsecutive=0;
        ll ans=0;
        for(int i=0; i<n; i++){
            if(a[i]<=q){
                currConsecutive++;
            }else{
                if(currConsecutive>=k){
                    currConsecutive=currConsecutive-k+1;
                    ans+= 1ll*(1ll*currConsecutive*(currConsecutive+1))/2;
                }
                currConsecutive=0;
            }
        }

        if(currConsecutive>=k){
            currConsecutive=currConsecutive-k+1;
            ans+= 1ll*(1ll*currConsecutive*(currConsecutive+1))/2;

        }

        cout<<ans;


        cout<<endl;
    }

    return 0;
}