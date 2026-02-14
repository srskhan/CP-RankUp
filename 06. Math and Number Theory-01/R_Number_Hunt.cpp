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
const ll INF = 1e18;
const int MOD = 1e9 + 7;
ll fx[] = {0, 0, 1, -1, 1, 1, -1, -1};
ll fy[] = {1, -1, 0, 0, -1, 1, -1, 1};
ll gcdll(ll a, ll b)
{
    while (b)
    {
        a %= b;
        swap(a, b);
    }
    return a;
}
ll lcmll(ll a, ll b) { return (a / gcdll(a, b)) * b; }

// ------------------------ Main ------------------------
bool isPrime(int n) {
    if(n < 2) return false;
    if(n == 2) return true;
    if(n % 2 == 0) return false;

    for(long long i = 3; i * i <= n; i += 2) {
        if(n % i == 0) return false;
    }
    return true;
}


ll find_Product_of_primes(int start){
    vector<ll>primes;
    while(primes.size()<=2){
        if(isPrime(start)){
            primes.push_back(start);
        }
        start++;
    }
    return primes[0] * primes[1];
}

int main()
{
    fast_io;

    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        if(x == 1) x = 2;
        cout<< find_Product_of_primes(x) <<nl;
    }

    return 0;
}