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

bool isPrime(int n) {
   if (n == 1) {
      return false;
   }

   for (int i = 2;i * i <= n;i++) {
      if (n % i == 0) {
         return false;
      }
   }
   return true;
}

int main() {
    fast_io;

    int n;
    cin>>n;

    if(isPrime(n)){
        cout<< 1 <<nl;
    }
    else if(n%2==0){
        cout<< 2 <<nl;
    }
    else{
        if(isPrime(n-2)){
            cout<< 2 <<nl;
        }
        else{
            cout<< 3 <<nl;
        }
    }

    return 0;
}