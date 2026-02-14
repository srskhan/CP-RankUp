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
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y;
	    cin>>x>>y;
	    
	    vector<int>multiple ;
	    
	    for(int i=x;i<=y;i++){
	        if(i%x ==0){
	            multiple.push_back(i);
	        }
	    }
	    int even_sum = 0, odd_sum = 0;
	    for(int i=0;i<multiple.size();i++){
            if(multiple[i] % 2 == 0){
                even_sum += multiple[i];
            }
            else{
                odd_sum += multiple[i];
            }

	    }

        if(even_sum >= odd_sum){
            yes;
        }
        else{
            no;
        }
	}

}