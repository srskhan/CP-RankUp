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
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++) cin>> arr[i];

        int c1=0,c2=0,c3=0;
        for(int i=0;i<n;i++){
            if(arr[i]== 1) c1++;
            if(arr[i]== 2) c2++;
            if(arr[i]== 3) c3++;
        }

        int removed13 = min(c1,c3);
        int remove2= max(0,c2-1);

        int operation = removed13 + remove2;
        cout<< operation <<endl;
    }

    return 0;
}