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
    
    int n;
    cin>>n;
    map<string, string> ans;
    map<string,string> has;
    while(n--)
    {
        string old,nw;
        cin>>old>>nw;

        if(has.find(old) != has.end()){
            string original = has[old];
            ans[original] = nw;
            has.erase(old);
            has[nw] = original;
        }
        else{
            ans[old] = nw;
            has[nw] = old;
        }

    }

    cout<< ans.size() <<'\n';

    for(auto it : ans){
        cout<< it.first <<" " << it.second <<endl;
    }
    return 0;
}