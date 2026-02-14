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

        sort(all(arr));

        bool flag = true;

        int i=0,j=n-1;
        while(i<j)
        {
            if(flag){
                cout<< arr[i]<<" ";
                i++;
            }
            else{
                cout<< arr[j]<<" ";
                j--;
            }
            flag = !flag;
        }
        if(i==j){
            cout<< arr[i]<<nl;
        }
    }

    return 0;
}