
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    int t;
    cin >> t;

    while (t--) {
        
        ll n;
        cin>>n;

        string s = to_string(n);
        int size= s.size();

        int nearest0=-1;
        int nearest5=-1;
        int nearest00 = -1;
        int nearest50 = -1;
        int nearest75 = -1;
        int nearest25 = -1;

        for(int i= size-1; i>=0 ; i--){

                if(s[i]=='0' && nearest0==-1 ){
                    nearest0=i;
                }else if(s[i]=='5' && nearest0!=-1 && nearest50==-1 ){
                    nearest50=i;
                    if(nearest5==-1) nearest5=i;
                    
                }else if(s[i]== '5' && nearest5==-1){
                    nearest5=i;
                }else if(s[i]== '0' && nearest0!=-1  && nearest00==-1){
                    nearest00=i;
                }else if( s[i]== '2' && nearest5!=-1 && nearest25==-1){
                    nearest25=i;
                }else if( s[i]== '7' && nearest5!=-1  && nearest75==-1 ){
                    nearest75=i;
                }
        }

        int ans = min(size-nearest00 , min(size- nearest25, min(size-nearest50, size-nearest75)));

        cout<<ans-2;


        cout<<endl;


    }

    return 0;
}
