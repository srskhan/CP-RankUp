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
        string st;
        cin>>st;
        int cnt00=0, cnt11=0;
        for(int i=0;i<n-1;i++){
            if(st[i]=='0' && st[i+1]=='0'){
                cnt00++;
            }
            if(st[i]=='1' && st[i+1]=='1'){
                cnt11++;
            }
        }

        if(cnt11>cnt00){
            cout<< 0 <<nl;
        }
        else{
            cout<< (cnt00-cnt11+1)/2 <<nl;
        }
    }

    return 0;
}