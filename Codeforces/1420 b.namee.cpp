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
int main(){
    ll n, m, a, b, c, i, j, mx=0, mn=2222222;
    int ar[100005];
    cin>>n;
    for (i = 0; i < n; i++){
        si(ar[i]);
    }
    sort(ar, ar+n);
    for (i = 0; i < n; i++){
        if (ar[i+(n-1)]-ar[i]<mn){
            mn = ar[i+(n-1)] - ar[i];
        }
    }
    cout <<mn<< endl;
    return 0;
}
