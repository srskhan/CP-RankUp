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
        string st;
        cin>>st;

        int c_01 = 0, c_10 = 0;
        for(int i=0;i<n-1;i++){
            if(st[i]=='0' && st[i+1]=='1'){
                c_01++;
            }

            if(st[i]=='1' && st[i+1] == '0'){
                c_10++;
            }
        }

        // cout<<c_01 <<" "<< c_10 <<endl;

        if(c_01>0 && c_10 > 0){
            cout<<"Alice"<<endl;
        }
        else{
            cout<<"Bob"<<endl;
        }
    }

    return 0;
}