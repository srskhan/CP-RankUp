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
        vector<int>a(n),b(n);
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];

        bool ok = true;
        for(int i=0;i<n-1;i++){
            if(a[i]<a[i+1] && b[i]>b[i+1]){
                ok = false;
                break;
            }
            else if(a[i]>a[i+1] && b[i]<b[i+1]){
                ok = false;
                break;
            }
            else{
                true;
            }
        }

        if(ok){
            cout<< "Yes" <<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }

    return 0;
}