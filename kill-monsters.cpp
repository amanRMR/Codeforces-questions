#include <bits/stdc++.h>
using namespace std;

using ll = long long;
 
int main() {
    int t;
    cin >> t;

    while(t--) {
        
        int n, k;
        cin>>n>>k; 

       

        vector<pair<int,int>> divisible;
        vector<pair<int,int>> nonDiv;

        for(int i=0; i<n; i++){
            int a;
            cin>>a;

            if(a%k==0){
                divisible.push_back({0,i+1});
            }else{
                nonDiv.push_back({a%k,i+1});
            }
        }

        sort(divisible.begin(), divisible.end(), [](auto a, auto b){
            
                return a.second < b.second;
            
        });

        sort(nonDiv.begin(), nonDiv.end(), [](auto a, auto b){
            if(a.first == b.first ){
                return a.second <b.second;
            }

            return a.first > b.first;
        });

        vector<int> ans;

        for(int i=0; i< divisible.size(); i++){
            ans.push_back(divisible[i].second);
        }

        for(int i=0; i< nonDiv.size(); i++){
            ans.push_back(nonDiv[i].second);
        }


        for(int i=0; i<n; i++) cout<<ans[i]<<" ";





        cout<<endl;
    }

    return 0;
}