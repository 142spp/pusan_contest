#include <bits/stdc++.h>

using namespace std;

map<char,char> mirror = {
    {'p','q'},
    {'q','p'},
    {'b','d'},
    {'d','b'},
    {'i','i'},
    {'m','m'},
    {'v','v'},
    {'w','w'},
    {'l','l'},
    {'o','o'},
    {'x','x'}
};
 
map<char,char> dot = {
    {'p','d'},
    {'d','p'},
    {'b','q'},
    {'q','b'},
    {'u','n'},
    {'n','u'},
    {'s','s'},
    {'z','z'}
};

bool is_mirror(string s){
    string::iterator st = s.begin();
    string::iterator ed = s.end();

    while(st != ed--){
        if(mirror.find(*st) == mirror.end()) return false;
        if(mirror[*st] != *ed) return false;
        if(st++ == ed) break;
    }
    return true;
}

bool is_dot(string s){
    string::iterator st = s.begin();
    string::iterator ed = s.end();

    while(st != ed--){
        if(dot.find(*st) == dot.end()) return false;
        if(dot[*st] != *ed) return false;
        if(st++ == ed) break;
    }
    return true;
}

vector<int> ans;

vector<vector<int>> table;

void substring(string& s,int st, int ed){
    string str = s.substr(st,ed-st);
    if(str.empty() || table[st][ed]) return; 
    table[st][ed] = true;
    if(is_mirror(str) || is_dot(str)){
        ans.push_back(str.size());
        return; 
    }
    else{
        substring(s,st+1,ed);
        substring(s,st,ed-1);
    }
}

void two_pointer(string& str, string::iterator st, string::iterator ed){
    

    while(st!= ed--){

        if(st++==ed) break;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string str; cin >> str;



    if(ans.empty()) cout << "NOANSWER";
    else cout << *max_element(ans.begin(),ans.end());
    
    return 0;
}