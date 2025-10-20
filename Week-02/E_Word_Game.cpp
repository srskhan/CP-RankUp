#include <iostream>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <list>
#include <map>
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
        int n,p=3;
        cin>>n;
        map<string, vector<int>> mp;
        for(int i=1;i<=p;i++){
            for(int j=1;j<=n;j++){
                string s;
                cin>>s;
                mp[s].push_back(i);
            }
        }

        vector<int> ans(p+1);

        for(auto [key,val]: mp){
            vector<int>v=val;
            if(v.size()==1){
                ans[v[0]] += 3;
            }
            if(v.size() == 2){
                ans[v[0]] ++;
                ans[v[1]] ++;
            }
        }

        for(int i=1;i<=p;i++){
            cout<< ans[i] << " ";
        }
        cout<<'\n';
    }
    return 0;
}