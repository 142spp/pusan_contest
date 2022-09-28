    #include <bits/stdc++.h>

    using namespace std;

    int main(){
        ios::sync_with_stdio(false);
        cin.tie(NULL);

        int n; cin >> n;
        vector<long long> vc;
        while(n--){
            long long s; cin >> s;
            vc.push_back(s);
        }
        vector<long long> sorted(vc);
        sort(sorted.begin(),sorted.end());

        int count = 0;
        vector<long long>::iterator iter_v = vc.begin();
        vector<long long>::iterator iter_s = sorted.begin();

        map<string,int> m;
        for(int i=0; i<vc.size(); i++){
            string str = to_string(vc[i]);
            m.insert(str,i);
        }

        while(iter_v != vc.end()){
            if(*iter_v == *iter_s) {
                iter_v++; iter_s++;
                continue;
            }
            *iter_v = vc[m[*iter_v]];
            iter_v++; iter_s++; count++;
    }
    cout << count ;
    }
