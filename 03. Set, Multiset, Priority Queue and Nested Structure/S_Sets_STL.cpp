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
    set<int>s;
    while(t--)
    {
        int type;
        cin>>type;

        if(type == 1){
            int x;
            cin>>x;
            s.insert(x);
        }
        if(type == 2){
            int x;
            cin>>x;
            auto it = s.find(x);
            if(it != s.end()){
                s.erase(x);
            }
        }
        if(type == 3){
            int x;
            cin>>x;
            auto it = s.find(x);
            if(it == s.end()){
                cout<<"No"<<endl;
            }
            else{
                cout<<"Yes"<<endl;
            }
        }


    }

    return 0;
}