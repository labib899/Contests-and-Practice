#include<bits/stdc++.h>
//#include<ext/pb_ds/assoc_container.hpp>
using namespace std;
//using namespace __gnu_pbds;
 
#define fastIO                  ios::sync_with_stdio(0);cin.tie(0);
#define fRead(x)                freopen(x,"r",stdin)
#define fWrite(x)               freopen(x,"w",stdout)
#define endl                    "\n"
#define pb                      push_back
#define mp                      make_pair
#define all(x)                  x.begin(),x.end()
#define forn(i,l,r,x)           for(ll i=l;i<=r;i+=x)
#define min3(a,b,c)             min(a,min(b,c))
#define min4(a,b,c,d)           min(a,min(b,min(c,d)))
#define max3(a,b,c)             max(a,max(b,c))
#define max4(a,b,c,d)           max(a,max(b,max(c,d)))
#define print(v)                for(auto x:v) cout<<x<<" ";cout<<endl;
typedef long long               ll;
typedef long double             ld;
typedef vector<int>             vi;
typedef vector<vi>              vvi;
typedef vector<ll>              vll;
typedef vector<vll>             vvll;
typedef vector<string>          vs;
typedef pair<int,int>           pi;
typedef pair<ll,ll>             pll;
typedef priority_queue<int>     pqi;
typedef priority_queue<ll>      pqll;
//typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> indexed_set;


void solve();
ll mod=1e9+7;
const ll N=1e5+10;
ll f[N];
void fact()
{
    f[0]=0,f[1]=1;
    for(int i=2;i<=N;i++) f[i]=(f[i-1]*i)%mod;
}


int main()
{
    #ifndef ONLINE_JUDGE
        //fRead("input.txt");
        //fWrite("output.txt");
    #endif
    fastIO;
    fact();
    ll t=1; cin>>t;
    while(t--) solve();
}

void solve()
{
    ll n; cin>>n;
    cout<<((n*(n-1)%mod)*f[n])%mod<<endl;
}


