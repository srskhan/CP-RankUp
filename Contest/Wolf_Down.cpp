#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    string st;
	    cin>>st;
	    int safe=0;
	    for(int i=0;i<n;i++){
	        if(st[i]=='0'){
	            safe++;
	        }
	        else if(st[i]=='1'){
	            break;
	        }
	    }
	    cout<< safe <<endl;
	}

}