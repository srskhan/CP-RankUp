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
    if(n==1){
        cout<< 1 << nl;
        return 0;
    }
    if(n==2 || n==3){
        cout<<"NO SOLUTION" << nl;
    }
    else{
        
        for(int i=2;i<=n;i+=2){
            cout<< i << " ";
        }
        for(int i=1;i<=n;i+=2){
            cout<< i << " ";
        }
    }

    return 0;
}