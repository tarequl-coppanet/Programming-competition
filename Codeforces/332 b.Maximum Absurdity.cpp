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
int main(){
    ll n, m, a, b, c, i, j, k, mx = 0, ans;
    ll ar[200005],br[200005], p[200005];
    p[0]=br[0]=0;
    cin>>n>>k;
    for (i = 1; i <= n; i++){
        sl(ar[i]);
        p[i]=p[i-1]+ar[i];
    }
    for (i = 1; i <= n-(k-1); i++){
        br[i]=p[i+k-1]-p[i-1];
    }
    ans=a=b=-1;
    for (i = k+1; i <= n-(k-1); i++){
        if (br[i - k] > br[mx]) mx = i - k;
        if (ans < br[i] + br[mx]) {
            ans = br[i] + br[mx];
            a = mx;
            b = i;
        }
    }
    cout<<a<<" "<<b<<endl;
    return 0;
}
