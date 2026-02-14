//link:  https://codeforces.com/problemset/problem/1994/B
#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <queue>
#include <stack>
#include <algorithm>
#include <cmath>
#include <string>
#include <cstring>
#include <climits>
#include <numeric>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define yes cout << "YES" << nl
#define no cout << "NO" << nl
#define nl '\n'
typedef long long ll;

int main() {
    fast_io;

    int q;
    cin>>q;
    while(q--)
    {
        int n;
        cin>>n;
        string s,t;
        cin>>s>>t;

        if(s==t){
            yes;
            continue;
        }

        int pos = -1;
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                pos = i;
                break;
            }
        }

        if(pos == -1){
            no;
            continue;
        }
        
        bool ok = true;
        for(int i=0;i<pos;i++){
            if(s[i] != t[i]){
                ok = false;
                break;
            }
        }

        if(ok){
            yes;
        }
        else{
            no;
        }
    }

    return 0;
}