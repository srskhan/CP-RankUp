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
        vector<ll>arr(n);
        ll sum=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sum+= arr[i];
        }

        if(sum % n != 0){
            cout<<"Impossible" << nl;
            continue;
        }

        ll mean = sum/n;

        int ans = -1;

        for(int i=0;i<n;i++){
            if(arr[i]== mean){
                ans = i+1;
                break;
            }
        }

        if(ans == -1){
            cout<< "Impossible" <<nl;
        }
        else{
            cout<< ans << nl;
        }

    }    

    return 0;
}