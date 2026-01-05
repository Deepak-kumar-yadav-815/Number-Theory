#include<bits/stdc++.h>
using namespace std;
int ar[1000001];

void Sieve(){
    int maxn = 1000000;
    for(int i = 0; i <= maxn; i++){
        ar[i] = -1;
    }
    for(int i = 2; i <= maxn; i++){
        if(ar[i] == -1){
            for(int j = i; j <= maxn; j += i){
                if(ar[j] == -1) ar[j] = i;
            }
        }
    }
}

int main(){
    Sieve();
    int n;
    cin >> n;
    while(n > 1){
        cout << ar[n] << " ";
        n /= ar[n];
    }
}