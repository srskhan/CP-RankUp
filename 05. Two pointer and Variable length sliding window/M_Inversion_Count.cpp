#include <bits/stdc++.h>

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

using namespace std;

template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    vector<int> arr(n);
	    for(int i=0;i<n;i++) cin>>arr[i];
	    
	    long long ans=0;
	    pbds<int> pb;
	    
	    for(int i=n-1;i>=0;i--){
	        ans += pb.order_of_key(arr[i]);
	        pb.insert(arr[i]);
	    }
	    cout<< ans << endl;
	}

}
