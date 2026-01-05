//(h.k)
#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define test(t) int t;cin>>t;while(t--)
#define all(x) begin(x),end(x)
bool is_prime[86028122];
vector<int>primes;
void sieve(){
    int maxn = 86028122;
    for(int i=1;i<=maxn;i++)is_prime[i]=1;
    is_prime[0] = is_prime[1] =0;
    for(int i=2;i*i<=maxn;i++){
        if(is_prime[i]){
            primes.push_back(i);
            for(int j=i*i;j*j<=maxn;j+=i){
                is_prime[j]=0;
            }
        }
    }
}
signed main() {
  fast;
  sieve();
  int t;cin>>t;
  while(t--){
  	int n;
  	cin>>n;
  	cout<<primes[n-1]<<endl;
  }
}
