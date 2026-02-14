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
const int maxN = (1<<15);
vector<int> allPalindrome;

bool isPalindrome(int num) {
    if (num < 0) return false;
    
    string str = to_string(num);
    int left = 0;
    int right = str.length() - 1;
    
    while (left < right) {
        if (str[left] != str[right]) {
            return false;
        }
        left++;
        right--;
    }
    
    return true;
}

void markPalindrome()
{
    for(int i=0;i<maxN;i++){
        if(isPalindrome(i)){
            allPalindrome.push_back(i);
        }
    }
}

int main() {
    fast_io;

    markPalindrome();

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> arr(n);
        vector<int> cnt(maxN+1);

        for(int i=0;i<n;i++){
            cin>>arr[i];
            cnt[arr[i]]++;
        }
        ll ans = n;
        for(int i=0;i<n;i++){
            for(int j=0;j<allPalindrome.size();j++){
                int curr = arr[i] ^ allPalindrome[j];
                ans += cnt[curr];
            }
        }

        cout<< ans/2 << nl;
    }

    return 0;
}