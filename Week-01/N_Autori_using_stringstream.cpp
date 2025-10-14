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
    
    string st;
    cin>>st;

    stringstream ss(st);
    string word;
    string ans = "";

    while(getline(ss,word,'-')){
        ans+= word[0];
    }
    cout<<ans<<'\n';
    return 0;
}