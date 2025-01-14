#include<bits/stdc++.h>
using namespace std;
#define fo(i, n) for (i = 0; i < n; i++)
#define FOR(i,a,b) for (int i = (a); i < (b); ++i)
#define ll long long
#define si(x) scanf("%d", &x)
#define sl(x) scanf("%lld", &x)
#define ss(s) scanf("%s", s)
#define pi(x) printf("%d\n", x)
#define pl(x) printf("%lld\n", x)
#define ps(s) printf("%s\n", s)
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define CLR(a, b) memset(a, b, sizeof(a))
#define sortall(x) sort(all(x))
#define tr(it, a) for (auto it = a.begin(); it != a.end(); it++)
#define PI 2*acos(0.0)
#define M 998244353
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
const int MOD = 1000 * 1000 * 1000 + 7;
const int MAXN = 10 * 1000 * 1000 + 10, MAXV = 4;
ll GCD(ll a, ll b) { return (a % b) == 0 ? b : GCD(b, a % b); }
ll mod(ll x) { return ((x % M + M) % M); }
bool cmp(const pii &left, const pii &right){
    return left.first > right.first || (left.first == right.first && left.second < right.second); }
//int find(int x) { return (p[x] == x ? x : p[x] = find(p[x])); } //p[find(i)]=find(j);
int visited[10];
vector<int>vec[10];
void dfs(int at){
    visited[at] = 1;
    cout<<at<<" ";
    for (int i = 0; i < vec[at].size(); i++){
        if(visited[vec[at][i]]==0)
            dfs(vec[at][i]);
    }
}


int main(){ //s: 0.0 am - e: 02.21am;
    int t=1, cs = 1;
    //cin >> t;
    while (t--){
        ll n, m, a, b, c, i, j, k, mx = 0, mn = 1e18;
        string sa, sb;
        int ar[200]={0};
        cin>>n;
        vi va, vb;
        cin>>sa>>sb;
        for (i = 0; i < n; i++){
            ar[sa[i]]++;
            ar[sb[i]]++;
            if(sa[i]!=sb[i]){
                if(sa[i]=='a') va.pb(i+1);
                else vb.pb(i+1);
            }
        }
        if(ar['a']%2 != 0 || ar['b']%2 != 0)
            cout<<-1<<endl;
        else{
            if(va.size()%2==1 && vb.size()%2==1){
                cout<<1 + (va.size()+vb.size())/2<<endl;
                cout<<va.back()<<" "<<va.back()<<" "<<endl;
                cout<<va.back()<<" "<<vb.back()<<" "<<endl;
                va.pop_back(); vb.pop_back();
            }
            else cout<<(va.size()+vb.size())/2<<endl;
            for(i = 0; i< va.size(); i+=2) cout<<va[i]<<" "<<va[i+1]<<" "<<endl;
            for(i = 0; i< vb.size(); i+=2) cout<<vb[i]<<" "<<vb[i+1]<<" "<<endl;
        }
    }
    return 0;
}
