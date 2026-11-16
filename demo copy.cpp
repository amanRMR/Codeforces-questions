#include <bits/stdc++.h>
using namespace std;

using ll = long long;
 
int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin>>n;

        vector<vector<int>> v;
        
        for(int i=0; i<n; i++){
            int m;
            cin>>m;
            vector<int> temp;
            for(int j=0; j<m; j++){
                int a;
                cin>>a;
                temp.push_back(a);
            }

            sort(temp.begin(), temp.end());
            v.push_back(temp);
        }

        int smallestSecondEle= v[0][1];
        int indexOfsmallestSecondEle=0;
        int smallestEle=v[0][0];

        for(int i=0; i<n; i++){
            if(smallestSecondEle > v[i][1]){
                smallestSecondEle=v[i][1];
                indexOfsmallestSecondEle=i;
            }

            smallestEle= min(v[i][0], smallestEle);
        }

        ll ans=0;

        for(int i=0; i<n; i++){
            if(i==indexOfsmallestSecondEle){
                ans=ans + smallestEle;
            }else{
                ans= ans + v[i][1];
            }
        }

        cout<<ans;



        cout<<endl;
    }

    return 0;
}