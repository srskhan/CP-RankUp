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
        long long k;
        cin>>n>>k;
        string st;
        cin>>st;
        int boundary=0;
        if(st[0] == st[n-1]){
            boundary = k-1;
        }
        else{
            boundary = 0;
        }

        int consequtive = 0;
        int number_of_i = 0;

        for(int i=0;i<n;i++){
            if(st[i]=='I'){
                number_of_i++;
            }
        }

        for(int i=0;i<n-1;i++){
            if(st[i]== st[i+1] && st[i] != 'I'){
                consequtive++;
            }
        }

        long long score = boundary+ number_of_i*k + consequtive * k;
        cout<< score<<endl;
    }


    return 0;
}