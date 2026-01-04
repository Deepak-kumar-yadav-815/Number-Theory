//(h.k)
#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define test(t) int t;cin>>t;while(t--)
#define all(x) begin(x),end(x)
bool Isprime(int n){
    if(n==1)return false;
    for(int i=0;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
signed main() {
  fast;
   int n;cin>>n;
   if(Isprime(n)){
    cout<<"Given number is prime";
   }
   else {
    cout<<"this is not a prime";
   }
}
