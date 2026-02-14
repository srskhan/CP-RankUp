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
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        int mn = 1, mx = n;

        int l=0,r=n-1;

        while(l<=r)
        {
            if(arr[l] == mn){
                l++;
                mn++;
            }
            else if(arr[l] == mx){
                l++;
                mx--;
            }
            else if(arr[r] == mn){
                r--;
                mn++;
            }
            else if(arr[r] == mx){
                r--;
                mx--;
            }
            else{
                break;
            }
        }

        if(l<=r){
            cout<< l+1 << " " << r+1 <<endl;
        }
        else{
            cout<< -1 <<nl;
        }
    }

    return 0;
}