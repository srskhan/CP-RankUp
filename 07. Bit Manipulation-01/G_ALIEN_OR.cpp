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

    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;

        map<string, bool> present;

        for(int i=0;i<n;i++){
            string s;
            cin>>s;
            present[s]=true;
        }

        string s;
        for(int i=0;i<k;i++){
            s.push_back('0');
        }
        bool ok = true;
        for(int i=0;i<k;i++){
            s[i]='1';
            if(!present[s]){
                ok = false;
                break;
            }
            s[i]='0';
        }
        if(ok) yes;
        else no;
    }    

    return 0;
}