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
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, x, a, b, c, i, j, mx=0, mn=0;
        int ar[100], br[100];
        vector <int> v;
        si(n);
        for ( i = 0; i < n; i++){
            si(ar[i]);
            mx+= ar[i];
        }
        if(mx==0){
            printf("NO\n");
            continue;
        }
        if(mx>0)
            sort(ar, ar+n, greater<int>());
        else
            sort(ar, ar + n);
        printf("YES\n");
        for ( i = 0; i < n; i++){
            mn+=ar[i];
            if(mn==0){
                v.push_back(ar[i]);
                mn-=ar[i];
            }
            else printf("%d ",ar[i]);
        }
        for ( j = 0; j < v.size(); j++){
            printf("%d ", v[j]);
        }
        printf("\n");
    }
    return 0;
}
