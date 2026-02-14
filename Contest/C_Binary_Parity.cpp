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
        vector<int> binary;
        while(n>0){
            int b = n%2;
            binary.push_back(b);
            n/=2;
        }

        int one_cnt = 0;

        for(int i=0;i<binary.size();i++){
            if(binary[i]==1){
                one_cnt++;
            }
        }

        if(one_cnt%2==0){
            cout<< "EVEN"<<nl;
        }
        else{
            cout<< "ODD"<<nl;
        }
    }

    return 0;
}