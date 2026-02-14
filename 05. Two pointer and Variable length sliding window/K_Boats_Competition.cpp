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
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++) cin>>arr[i];

        sort(arr.begin(),arr.end());

        int mx = 0;
        for(int s=1;s<=100;s++){
            int l=0,r=n-1;
            int cnt=0;
            while(l<r)
            {
                if(arr[l]+ arr[r]==s){
                    cnt++;
                    l++;
                    r--;
                }
                else if(arr[l]+ arr[r]<s){
                    l++;
                }
                else{
                    r--;
                }
            }
            mx = max(mx,cnt);
        }
        cout<< mx << nl;
    }

    return 0;
}