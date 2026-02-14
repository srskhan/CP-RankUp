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

        if(arr[0]== -1 && arr[n-1]== -1){
            arr[0]=arr[n-1]=0;
        }
        else if( arr[0] == -1){
            arr[0] = arr[n-1];
        }
        else if(arr[n-1] == -1){
            arr[n-1] = arr[0];
        }

        for(int i=1;i<n-1;i++){
            if(arr[i]==-1){
                arr[i]=0;
            }
        }

        ll ans = llabs(arr[n-1]-arr[0]);
        cout<< ans << nl;
        
        for(auto x: arr){
            cout<< x << " ";
        }
        cout<< nl;
    }

    return 0;
}