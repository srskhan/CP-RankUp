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
    map<string,int>mp;
    while(n--)
    {
        string st;
        cin>>st;
        
        if(mp[st] == 0){
            cout<<"OK"<<'\n';
        }
        else{
            cout<<st<< mp[st]<<'\n';
        }
    
        mp[st]++;
    }
    return 0;
}