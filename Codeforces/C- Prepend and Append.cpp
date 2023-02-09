#include<bits/stdc++.h>
//#include<ext/pb_ds/assoc_container.hpp>
using namespace std;
//using namespace __gnu_pbds;
 
#define fastIO                  ios::sync_with_stdio(0); cin.tie(0);
#define fRead(x)                freopen(x,"r",stdin)
#define fWrite(x)               freopen(x,"w",stdout)
#define endl                    "\n"
#define pb                      push_back
#define mp                      make_pair
#define all(x)                  x.begin(),x.end()
#define rep(i,l,r)              for(ll i=l;i<r;i++)
#define min3(a,b,c)             min(a,min(b,c))
#define min4(a,b,c,d)           min(a,min(b,min(c,d)))
#define max3(a,b,c)             max(a,max(b,c))
#define max4(a,b,c,d)           max(a,max(b,max(c,d)))
#define print(v)                for(auto x:v) cout<<x<<" "; cout<<endl;
#define F                       first
#define S                       second
typedef long long               ll;
typedef long double             ld;
typedef vector<int>             vi;
typedef vector<vi>              vvi;
typedef vector<ll>              vll;
typedef vector<vll>             vvll;
typedef vector<string>          vs;
typedef pair<int,int>           pii;
typedef pair<ll,ll>             pll;
typedef priority_queue<int>     pqi;
typedef priority_queue<ll>      pqll;
//typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> indexed_set;


void solve();


int main()
{
#ifndef ONLINE_JUDGE
    //fRead("input.txt");
    //fWrite("output.txt");
#endif
    fastIO;
    int t=1; cin>>t;
    for(int i=1;i<=t;i++)
    {
        //cout<<"Case "<<i<<": ";
        solve();
    }
}

void solve()
{
    int n; cin>>n;
    string s; cin>>s;
    int ans=n;
    for(int i=0,j=n-1;i<j;i++,j--)
    {
        if(s[i]!=s[j]) ans-=2;
        else break;
    }
    cout<<ans<<endl;
}




