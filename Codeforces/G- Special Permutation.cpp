#include<bits/stdc++.h>
//#include<ext/pb_ds/assoc_container.hpp>
using namespace std;
//using namespace __gnu_pbds;
 
#define fastIO ios::sync_with_stdio(0);cin.tie(0);
#define endl "\n"
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<string> vs;
typedef pair<ll,ll> pll;
typedef pair<int,int> pi;
typedef priority_queue<ll> pqll;
//typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> indexed_set;


void solve();

int main() {
#ifndef ONLINE_JUDGE
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
#endif
    fastIO;
    ll t; cin>>t;
    while(t--) solve();
}

void solve() {
    ll n; cin>>n;
    if(n<4) cout<<-1<<endl;
    else {
        if(n%2==0) {
            for(int i=n-1;i>=1;i-=2) cout<<i<<" ";
            cout<<4<<" "<<2<<" ";
        }
        else {
            for(int i=n;i>=1;i-=2) cout<<i<<" ";
            cout<<4<<" "<<2<<" ";
        }
        if(n>5) {
            for(int i=6;i<=n;i+=2) cout<<i<<" ";
        }
        cout<<endl;
    }
}


