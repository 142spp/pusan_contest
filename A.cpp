#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> vc;

bool is_akjil(vector<int>& a){
    int sum=0;
    for(int i=0; i<vc[0].size(); i++){
        sum+= abs(a[i] - vc[0][i]);
    }
    if(sum > 2000) return true;
    else return false;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m; cin >> n >> m;
    vc.resize(n);
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            int input; cin >> input;
            vc[i].push_back(input);
        }
    }
    int to = 0;
    for(int i = 1; i<vc.size(); i++){
        if(is_akjil(vc[i])) to ++;
    }
    if(to >= vc.size()/2) {
        cout << "YES" << "\n";
    }else cout << "NO" <<"\n";

    return 0;
}