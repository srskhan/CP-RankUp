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
    
    int n;
    cin>>n;
    map<string,bool> mp;
    for(int i=0;i<n;i++)
    {
        string st;
        cin>>st;
        if(mp[st] == false){
            cout<< "NO"<<'\n';
        }
        else{
            cout<<"YES"<<'\n';
        }
        mp[st] = true;
    }
    return 0;
}