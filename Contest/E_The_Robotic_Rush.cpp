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
        int n,m,k;
        cin>>n>>m>>k;

        vector<ll> robot(n);

        for(int i=0;i<n;i++){
            cin>>robot[i];
        }

        set<ll>spike;

        for(int i=0;i<m;i++){
            ll spk;
            cin>>spk;
            spike.insert(spk);
        }

        string instruction;
        cin>> instruction;

        vector<bool> beche_ache(n,true);
        ll pos_change = 0;

        vector<int>ans;
        for(int i=0;i<k;i++){
            if(instruction[i]=='L'){
                pos_change--;
            }
            else{
                pos_change++;
            }
            for(int j=0;j<n;j++){
                if(beche_ache[j]){
                    ll bortoman_pos = robot[j]+ pos_change;
    
                    if(spike.count(bortoman_pos)){
                        beche_ache[j]= false;
                    }
                }
            }

            int bachar_sonkha=0;
            for(int j=0;j<n;j++){
                if(beche_ache[j]){
                    bachar_sonkha++;
                }
            }
            ans.push_back(bachar_sonkha);
        }


        for(int i=0;i<ans.size();i++){
            cout<< ans[i]<<" ";
        }
        cout<< nl;

    }    

    return 0;
}