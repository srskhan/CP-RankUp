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

    int n,m;
    cin>>n>>m;

    vector<int> arr1(n), arr2(m);
    for(int i=0;i<n;i++)
        cin>>arr1[i];
    for(int i=0;i<m;i++)
        cin>>arr2[i];

    int l=0,r=0, cnt = 0;

    while(r<m)
    {
        if(l<n && arr1[l]<arr2[r]){
            l++;
            cnt++;
        }
        else{
            cout<< cnt << " ";
            r++;
        }
    }
    return 0;
}