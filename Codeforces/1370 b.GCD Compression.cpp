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
    // freopen("input.txt", "r", stdin); 43
    // freopen("output.txt", "w", stdout);
    int t, cs = 1;
    cin >> t;
    while (t--){
        int n, m, a, b, c, l=1, y=0, i, j, k, mx = 0;
        int ar[100005];
        bitset<2005>bs;
        cin>>n;
        for ( i = 0; i < n*2; i++){ 
            si(ar[i]); 
        }
        for ( i = 0; i < n*2 && y<n-1; i++){
            if(bs[i]==1) continue;
            bs[i]=1;
            for ( j = 0; j < n*2; j++){
                if(bs[j]==0 && (ar[i]+ar[j])%2==0){
                    bs[j]=1;
                    cout<<i+1<<" "<<j+1<<endl;
                    y++;
                    break;
                }
            }
        }
    }
    return 0;
}
