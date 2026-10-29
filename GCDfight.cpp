
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    int t;
    cin >> t;

    while (t--) {
        
        ll a,b;
        cin>>a>>b;

        if(a==b){
            cout<<0<<" "<<0;
        }else{
            ll gcd= abs(a-b);
            
            ll operations = min( a%gcd, gcd - a%gcd);

            cout<<gcd<<" "<<operations;
        }
            
        cout<<endl;


    }

    return 0;
}
