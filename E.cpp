#include <bits/stdc++.h>

#define OVER 100001

using namespace std;


int main(){
    int n; cin >> n;
    
    vector<int> score;
    vector<int> dart;

    for(int i=0; i<n; i++){
        int s; cin >> s;
        score.push_back(s);
    }
    for(int i=0; i<n; i++){
        int d; cin >>d;
        dart.push_back(d);
    }

    vector<int> ans;

    while(true){
        int sum = 0, t_sum = 0;
        int mult = 1;
        for(int i=0; i<score.size(); i++){
            if(score[i]==OVER|| i== score.size()-1) {
                sum += mult*t_sum;
            }
        }
    }   
    cout << *max_element(ans.begin(),ans.end());
}