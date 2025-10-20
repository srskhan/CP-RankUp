#include <iostream>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <list>
#include <map>
#include<deque>
#include<set>
#include <algorithm>
#include <sstream>
#include <cstring>
#include <limits.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    
    while(t--)
    {
        int n;
        cin>>n;
        string st;
        cin>>st;
        set<char> unique_set(st.begin(),st.end());
        string r(unique_set.begin(),unique_set.end());
        
        map<char,char> mp;

        int m = r.size();
        for(int i=0;i<r.size();i++){
            mp[r[i]] = r[m-1-i];
            mp[r[m-1-i]] = r[i];
        }

        for(char c: st){
            cout<< mp[c];
        }
        cout<<'\n';


    }
    return 0;
}