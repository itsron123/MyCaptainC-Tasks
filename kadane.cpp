#include <bits/stdc++.h>

using namespace std;

#define ll long long int
#define MOD 1000000007
#define pb push_back


int main(){

    #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(0);
    cin.tie(NULL);

    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> v;
        for(int i=0;i<n;i++){
            ll temp;
            cin>>temp;
            v.pb(temp);
        }
        vector<ll> final_max;
        for(int i=0;i<n-1;i++){
            ll curr = v[i];
            vector<ll> curr_max;
            curr_max.pb(curr);
            for(int j=i+1;j<n;j++){
                curr += v[j];
                curr_max.pb(curr);
            }
            final_max.pb(*max_element(curr_max.begin(), curr_max.end()));
        }
        cout<<getMax(final_max)<<"\n";
    }

    return 0;
}
