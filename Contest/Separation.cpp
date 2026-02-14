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
        int n,x;
        cin>>n>>x;
        vector<int> arr(n);

        for(int i=0;i<n;i++) cin>>arr[i];

        int greater_than_x=0, less_than_x=0, equal_x=0;

        for(int i=0;i<n;i++){
            if(arr[i]>x) greater_than_x++;

            if(arr[i]<x) less_than_x++;

            if(arr[i]== x) equal_x++;
        }

        if(greater_than_x > 0 && less_than_x > 0 && equal_x == 0){
            cout<< "No" <<endl;
        }
        else{
            cout<<"Yes" <<endl;
        }

    }

    return 0;
}