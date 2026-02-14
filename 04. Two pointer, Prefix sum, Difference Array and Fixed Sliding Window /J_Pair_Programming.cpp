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
        int k,n,m;
        cin>>k>>n>>m;

        vector<int> ar1(n);
        vector<int>ar2(m);

        for(int i=0;i<n;i++){
            cin>>ar1[i];
        }
        for(int i=0;i<m;i++){
            cin>>ar2[i];
        }

        vector<int> ans;
        int i=0,j=0;

        bool ok = true;

        while(i<n || j<m)
        {
            bool moved = false;

            if(i<n && ar1[i]==0){
                ans.push_back(ar1[i]);
                k++;
                i++;
                moved = true;
            }
            else if( j<m && ar2[j]==0){
                ans.push_back(ar2[j]);
                k++;
                j++;
                moved = true;
            }
            else if(i<n && ar1[i]<=k){
                ans.push_back(ar1[i]);
                i++;
                moved = true;
            }
            else if(j<m && ar2[j] <= k){
                ans.push_back(ar2[j]);
                j++;
                moved = true;
            }

            if(!moved){
                ok = false;
                break;
            }
        }

        if(!ok){
            cout<< -1 <<nl;
        }
        else{
            for( int x: ans){
                cout<< x << " ";
            }
            cout<< nl;
        }
    }

    return 0;
}