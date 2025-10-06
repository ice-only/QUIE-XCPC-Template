#include <bits/stdc++.h>
using namespace std;
#define int long long
vector<bool>isprime(100000010);
vector<int>prime;
void getprime(int n){//n是数字上限
    prime.push_back(0);
    fill(isprime.begin(),isprime.begin()+n+2,1);
    isprime[1]=0;   
    fo(i,n,2){
        if(isprime[i])prime.push_back(i);
        for(int j=1;j<=prime.size()&&i*prime[j]<=n;j++){
            isprime[i*prime[j]]=0;
            if(i%prime[j]==0){
                break;
            }
        }
    }
}
void solve() {
    int k;
    cin>>k;//k是第几个prime
    cout<<prime[k]<<endl;
}
signed main() {
    ios::sync_with_stdio(false); 
    cin.tie(0);
    int t=1,n;
    cin >> n >> t;//t是查询次数
    getprime(n);
    while (t--) solve();
    return 0;
}
