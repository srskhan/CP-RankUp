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

    int n;
    cin>>n;
    vector<ll> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];

    int i=0,j=n-1;
    ll sumL=0,sumR=0,ans =0;
    while(i<=j)
    {
        if(sumL < sumR){
            sumL += arr[i];
            i++;
        }
        else if(sumL >  sumR){
            sumR += arr[j];
            j--;
        }
        else{
            ans = max(ans, sumL);
            if(i<=j){
                sumL += arr[i];
                i++;
            }
        }

        if(sumL == sumR) ans = max(ans,sumL);
    }

    cout<< ans << nl;

    return 0;
}