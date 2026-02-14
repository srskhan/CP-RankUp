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
        vector<int> arr(n+1);
        for(int i=1;i<=n;i++) cin>>arr[i];
    
        while(q--){
            int l,r,k;
            cin>>l>>r>>k;
            int odd_cnt = 0;
            for(int i=1;i<=n;i++){
                if(i>=l && i<=r){
                    if(k % 2!= 0){
                        odd_cnt++;
                    }
                }
                else if(arr[i] %2 != 0){
                    odd_cnt++;
                }
            }


            if(odd_cnt %2 != 0) yes;
            else no;

        }
        
    }

    return 0;
}