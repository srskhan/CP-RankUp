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
        int n,q;
        cin>>n>>q;
        string st;
        cin>>st;
        int mx = 0;
        int conse = 1;
        map<char,int> mp;
        for(int i=0;i<n;i++){
            mp[st[i]]++;

            if(mp[st[i]]>mx){
                mx = mp[st[i]];
            }
        }
        cout<< mx << " ";

        while(q--)
        {
            char c;
            cin>>c;
            mp[c]++;

            if(mp[c]>mx){
                mx = mp[c];
            }
            cout<< mx << " ";
        }
        cout<< nl;
    }

    return 0;
}