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

ll ar[1000005], p[1000005];
ll t, mx, n;
void genPrime(){
    for(ll i=4; i<= 1000005; i+=2){
        p[i]=1;
    }
    for(ll i=3; i<= 1000005; i+=2){
        if(p[i]==1) continue;
        for(ll j=i+i; j<=1000005; j+=i) p[j]=1;
    }
    for(ll i=1; i<= 1000005; i++){
        if(p[i]==0) mx++;
        ar[i]= mx;
    }
}
int main(){ //s: 0.0 am - e: 0.00am;
    genPrime();
    cin >> t;
    while (t--){
        sl(n);
        ll a = sqrt(n);
        pl(ar[n]-ar[a]+1);
    }
    return 0;
}
