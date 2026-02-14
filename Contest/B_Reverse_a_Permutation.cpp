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

        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        for(int i=0;i<n;i++){
            int ghorer_value = n-i;

            if(arr[i]==ghorer_value){
                continue;
            }


            int pos=-1;
            for(int j=i+1;j<n;j++){
                if(arr[j]==ghorer_value){
                    pos=j;
                    break;
                }
            }

            if(pos != -1){
                reverse(arr.begin()+i, arr.begin()+pos+1);
            }
            break;
        }


        for(int x: arr){
            cout<< x << " ";
        }
        cout<< nl;
    }

    return 0;
}