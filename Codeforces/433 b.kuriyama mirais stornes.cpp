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
#define PI 3.1415926535897932384626
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
bool cmp(const pii &left, const pii &right){
    return left.first > right.first || (left.first == right.first && left.second < right.second);
}
ll y[100005],z[100005];
int main(){
    int n, m, a, b, c, i, j, mx = 0, mn = 2222222;
    si(n);
	for (int a=1;a<=n;a++){
		int v;
		si(v);
		y[a]=z[a]=v;
	}
	sort(y+1,y+n+1);
	for (int a=1;a<=n;a++)
		z[a]+=z[a-1],y[a]+=y[a-1];
	scanf("%d",&m);
	for (int a=1;a<=m;a++){
		int opt,l,r;
		scanf("%d %d %d",&opt,&l,&r);
		if (opt==1) printf("%I64d\n",z[r]-z[l-1]);
		else printf("%I64d\n",y[r]-y[l-1]);
	}
 
	return 0;
}