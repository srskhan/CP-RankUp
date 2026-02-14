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
        string st;
        cin>>st;
        int l=0,r=0;
        int mn = INT_MAX;
        queue<char> q;
        while(r<n)
        {
            if(st[r]== 'W'){
                q.push('W');
            }
            if(r-l+1 == k){
                int s = q.size();
                mn = min(mn,s);
                if(!q.empty()){
                    if(st[l] == q.front()){
                        q.pop();
                    }
                }
                l++;
            }
            r++;
        }
        cout<< mn <<endl;
    }

    return 0;
}