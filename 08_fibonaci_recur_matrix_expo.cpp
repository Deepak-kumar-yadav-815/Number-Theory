#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> multiply(vector<vector<int>>&a,vector<vector<int>>&b){
    int n1 = a.size();
    int m1 = a[0].size();
    int n2 = b.size();
    int m2 = b[0].size();
    if(m1!=n2){
        throw(runtime_error("Multiplication not possible"));
    }
    vector<vector<int>>res(n1,vector<int>(m2,0));
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < m2; j++) {
            for (int k = 0; k < m1; k++) {
                res[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    return res;
}
void matrixExpo(vector<vector<int>>&a,int exp){
    int n=a.size();
    vector<vector<int>>res(n,vector<int>(n,0));
    for(int i=0;i<n;i++){
        res[i][i]=1;
    }
    while(exp){
        if(exp&1){
            res = multiply(a,res);
        }
        a=multiply(a,a);
        exp>>=1;
    }
    a=res;
}

signed main() {
    int n;
    cin>>n;
    vector<vector<int>>f(1,vector<int>(2,1));
    vector<vector<int>>magic(2,vector<int>(2,0));
    magic[0][1]=magic[1][1]=magic[1][0]=1;
    if(n==1){
        cout<<f[0][0];
    }
    else if(n==2){
        cout<<f[0][1];
    }
    else{
        matrixExpo(magic,n-1);
        f=multiply(f,magic);
        cout<<f[0][0];
    }
}
