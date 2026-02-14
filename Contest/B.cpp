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
        vector<char> arr(6);
        for(int i=0;i<6;i++){
            cin>> arr[i];
        }
        bool flag = false;
        for(int i=0;i<=3;i++){
            if(arr[i]=='W' && arr[i+1]== 'W' && arr[i+2]=='W'){
                flag = true;
            }
        }

        if(flag) yes;
        else no;

    }

    return 0;
}