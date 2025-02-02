#include<bits/stdc++.h>
using namespace std;
#define fo(i, n) for (i = 0; i < n; i++)
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
#define clr(x) memset(x, 0, sizeof(x))
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
ll GCD(ll a, ll b) { return (a % b) == 0 ? b : GCD(b, a % b); }
ll mod(ll x) { return ((x % M + M) % M); }
bool cmp(const pii &left, const pii &right){
    return left.first > right.first || (left.first == right.first && left.second < right.second);
}
int p[105];
int Find(int x){
    if(p[x]==x) return x;
    return p[x]=Find(p[x]);
}
int main(){ //s- , e-
    int n, m, a, b, c, i, j, k, mx = 0;
    vi ar[120];
    cin>>n>>m;
    for ( i = 0; i <= m; i++) p[i]=i;
    for (i=0; i<n; i++){
        cin>>a;
        if(a==0)mx++; 
        else{ 
            cin>>b;
            c=b;
            ar[i].push_back(b);
        }
        for ( j = 1; j < a; j++){
            cin>>c;
            ar[i].push_back(c);
            p[p[c]]=p[b];
            //p[Find(c)]=Find(b);
        }
    }
    for ( i = 0; i < n; i++){
        for ( j = 0; j < ar[i].size(); j++){
            if(Find(c)!=Find(ar[i][j])){
                mx++;
                p[p[ar[i][j]]] = p[c];
                //p[Find(ar[i][j])]=Find(c);
            }
        }
    }
    cout<<mx<<endl;
    return 0;
}
