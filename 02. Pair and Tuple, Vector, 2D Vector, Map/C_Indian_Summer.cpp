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
    cin.ignore();
    map<string,int> mp;
    string st;
    while(n--)
    {
        getline(cin,st);
        mp[st]++;
    }

    int cnt= mp.size();

    cout<<cnt<<'\n';
    return 0;
}