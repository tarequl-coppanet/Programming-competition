#include<bits/stdc++.h>
using namespace std;
int GCD(int a, int b){
    if(b==0) return a;
    else return GCD(b, a%b);
}
int main(){
    int t;
    cin>>t;
    while(t--){
    int a, b;
    cin>>a>>b;
    cout<<GCD(a,b)<<endl;
    }
    return 0;
}

