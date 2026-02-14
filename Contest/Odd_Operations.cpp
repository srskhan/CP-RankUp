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
        ll n;
        cin>>n;
        if(n%2== 1){
            cout<< 0 << nl;
            continue;
        }

        string s = to_string(n);
        int len = s.size();

        bool odd_digit_ache = false;
        for(char c: s){
            int d = c - '0';
            if(d%2==1){
                odd_digit_ache = true;
                break;
            }
        }

        if(odd_digit_ache){
            cout<< 1 <<nl;
        }
        else if(len == 1){
            cout<< -1 << nl;
        }
        else{
            int last_digit = s.back()- '0';
            bool even_2_er_theke_boro = false;

            for(char c: s){
                int d = c - '0';
                if(d>=4){
                    even_2_er_theke_boro = true;
                    break;
                }
            }
            if(last_digit==0 && len>1){
                cout<< 2 << nl;
            }
            else if(even_2_er_theke_boro){
                cout<< 2 << nl;
            }
            else{
                cout<< 3 <<nl;
            }
        }
    }

    return 0;
}




