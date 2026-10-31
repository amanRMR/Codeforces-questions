
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    int t;
    cin >> t;

    while (t--) {
        
        int n,m, i, j;
        cin>>n>>m>>i>>j;

        if( (i==1 || i==n) && (j==1 || j==m) ){
            cout<< n-i +1<<" "<< m-j+1<<" " n/2 <<" "<<m/2;

        }else{
            cout<< 1<<" "<<1<<" "<<n<<" "<<m;
        }
            
        cout<<endl;


    }

    return 0;
}
