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
    while(t--){
        int n,a,b;
        cin>>n>>a>>b;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        int cnt_wear=0;
        bool pore_ache = false;

        for(int i=0;i<n;i++){
            if(arr[i]<a){
                if(!pore_ache){
                    cnt_wear++;
                    pore_ache=true;
                }
            }
            else if(arr[i]>b){
                pore_ache = false;
            }
        }
        cout<< cnt_wear << nl;
    }

    return 0;
}