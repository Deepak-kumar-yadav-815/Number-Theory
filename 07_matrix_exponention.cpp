#include<bits/stdc++.h>
using namespace std;

const long long MOD = 1000000007;

vector<vector<long long>> multiply(vector<vector<long long>> &a, vector<vector<long long>> &b) {
    int n = a.size();
    vector<vector<long long>> res(n, vector<long long>(n));
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            for(int k = 0; k < n; k++)
                res[i][j] = (res[i][j] + a[i][k] * b[k][j]) % MOD;
    return res;
}

vector<vector<long long>> power(vector<vector<long long>> a, long long exp) {
    int n = a.size();
    vector<vector<long long>> res(n, vector<long long>(n));
    for(int i = 0; i < n; i++)
        res[i][i] = 1;
    while(exp) {
        if(exp & 1)
            res = multiply(res, a);
        a = multiply(a, a);
        exp >>= 1;
    }
    return res;
}

int main(){
    int n;
    long long exp;
    cin >> n >> exp;
    vector<vector<long long>> mat(n, vector<long long>(n));
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> mat[i][j];
    auto ans = power(mat, exp);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++)
            cout << ans[i][j] << " ";
        cout << "\n";
    }
}
