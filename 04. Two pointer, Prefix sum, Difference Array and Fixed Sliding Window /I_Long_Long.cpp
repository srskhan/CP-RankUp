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
        vector<int> arr(n);
        for(int i=0;i<n;i++) cin>>arr[i];

        ll sum = 0;
        int operation = 0;
        bool prev_neg = false;

        for(int i=0;i<n;i++){
            if(arr[i] < 0){
                sum+= (-arr[i]);

                if(prev_neg == false){
                    operation++;
                }
                prev_neg = true;
            }
            else if(arr[i]>0){
                sum += arr[i];
                prev_neg = false;
            }
            else{
                prev_neg = prev_neg;
            }
        }

        cout<< sum <<" "<< operation<<nl; 
    }

    return 0;
}