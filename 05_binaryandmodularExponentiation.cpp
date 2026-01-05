#include<bits/stdc++.h>
using namespace std;

int BinaryExpo(int a,int b){
    //return a^b;
    if(b==0)return 1;
    if(b==1){
        return a;
    }
    int res =1;
    while(b){
        if(b%2){
            res=res*a,b--;
        }
        else{
            a=(a*a),b/=2;
        }
    }
    return res;
}
int ModularExpo(int a,int b,int mod){
    //return (a^b)%mod;
    if(b==0)return 1;
    if(b==1){
        return a;
    }
    int res =1;
    while(b){
        if(b%2){
            res = (res*a)%mod,b--;
        }
        else {
            a=(a*a)%mod;
            b/=2;
        }
    }
    return res;
}
signed main() {
    int a,b;cin>>a>>b;
    cout<<BinaryExpo(a,b)<<endl;
    cout<<ModularExpo(a,b,2);
}
