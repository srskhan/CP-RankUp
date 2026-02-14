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

// int main() {
//     fast_io;

    

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int n;
        cin >> n;
        vector<int> prices(n);
        
        for(int i = 0; i < n; i++) {
            cin >> prices[i];
        }
        
        priority_queue<int, vector<int>, greater<int>> min_heap; // min heap
        long long total_profit = 0;
        
        for(int i = 0; i < n; i++) {
            int current_price = prices[i];
            
            // আজকের watch পেলাম
            min_heap.push(current_price);
            
            // সর্বোচ্চ 2টি watch বিক্রি করার চেষ্টা করব
            int sold = 0;
            while(sold < 2 && !min_heap.empty() && min_heap.top() <= current_price) {
                total_profit += current_price;
                min_heap.pop();
                sold++;
            }
        }
        
        cout << total_profit << endl;
    }
    
    return 0;
}