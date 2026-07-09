#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define mofile(s) freopen(s,"r",stdin)
#define outfile(s) freopen(s,"w",stdout)
#define task SERVER
#define ll long long
#define ii pair<ll,ll>
#define iii pair<ll,ii>
#define fi first
#define se second
#define tf bool
#define ST stack
#define DQ deque
#define Q queue
#define S string
#define Ma map
#define UM unordered_map
#define SE set
#define str(x) to_string(x)
#define all(a) (a).begin(),(a).end()
#define FOR(i,l,r,mid) for(int i=l;i<=r;i+=mid)
#define FOD(i,l,r,mid) for(int i=r;i>=l;i-=mid)
#define xuong cout<<"\n"
#define debug(x) cout<<(x)<<" "
#define ppcnt(x) __builtin_popcntll(x)
#define parity(x) __builtin_parityll(x)
#define leading0(x) __builtin_clzll(x)
#define LOG2(x) __lg(x)
#define tr0(x) __builtin_ctzll(x)
#define fiset(x) __builtin_ffsll(x)
#define MASK(k) (1LL<<(k))
#define BIT(x,k) ((x)>>(k)&1)
#define pb push_back
#define tron(x) setprecision(x)
#define het return 0
#define base_ 1000000000
template<typename... T>
void in(T&... args){((cin>>args),...);}
template<class X,class Y>
    bool maximize(X &x,const Y &y){return(x<y)?x=y,1:0;}
template<class X,class Y>
    bool minimize(X &x,const Y &y){return(x>y)?x=y,1:0;}
const ll maxn=1e6+67;
const ll tle=2e8;
const ll INF=1e9+9;
const int base=31;
const ll MOD=1e9+7;
const int VND=1000;
string bcc="abcdefghijklmnopqrstuvwxyz";
int midx[]={-1,0,1,0};
int midy[]={0,1,0,-1};
bool sang[10000005];
ll pref[1005][1005],mt[1005][1005];
void sieve(int n){
    for(int i=1;i<=n;++i)sang[i]=1;
    sang[0]=sang[1]=0;
    for(int i=2;i*i<=n;++i){
        if(sang[i]){
            for(int j=i*i;j<=n;j+=i) sang[j]=0;
        }
    }
}
void lis(){
    vector<int>t;
    vector<int>a;
    int n;cin>>n;
    for(int i=1;i<=n;++i){
        int ai;cin>>ai;
        a.pb(ai);
    }
    for(int x:a){
        auto it=lower_bound(all(t),x);
        if(it==t.end())t.pb(x);
        else *it=x;
    }
    cout<<(int)t.size()<<"\n";
}
void pfs2mid(){
    int n,m,k;cin>>n>>k;m=n;
    for(int i=1;i<=n;++i){
        for(int j=1;j<=m;++j)cin>>mt[i][j];
    }
    for(int i=1;i<=n;++i){
        for(int j=1;j<=m;++j)pref[i][j]=mt[i][j]+pref[i-1][j]+pref[i][j-1]-pref[i-1][j-1];
    }
}
ll qu2mid(int x1,int y1,int x2,int y2){
    return pref[x2][y2]-pref[x1-1][y2]-pref[x2][y1-1]+pref[x1-1][y1-1];
}
void solution(){

}
int main(){
    fast;
    solution();
    het;
}
