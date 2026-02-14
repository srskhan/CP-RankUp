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

#define fast_io                  \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define yes cout << "YES" << nl
#define no cout << "NO" << nl
#define nl '\n'
typedef long long ll;

int main()
{
    fast_io;

    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        string st;
        cin >> st;
        int swip = 0;
        bool ok = true;
        if(st[0] == '0'){
            ok = false;
        }
        else{
            for (int i = 0; i < n; i++)
            {
                if (st[i] == '1')
                {
                    swip = x;
                }
    
                if (st[i] == '0')
                {
                    if(swip>0){
                        swip--;
                    }
                    else{
                        ok = false;
                        break;
                    }
                }
            }

        }

        if (ok)
        {
            yes;
        }
        else
        {
            no;
        }
    }
    return 0;
}