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
    string st;
    cin>>st;
    vector<string> vec;
    for(int i=0;i<st.size()-1;i++){
        string tg = st.substr(i,2);
        vec.push_back(tg);
    }

    map<string,int> mp;

    for(int i=0;i<vec.size();i++){
        mp[vec[i]]++;
    }

    int mx = INT_MIN;
    string two_gram;


    for(auto [key,val]: mp){
        if(val>mx){
            mx = val;
            two_gram = key;
        }
    }

    cout<< two_gram<<endl;
    return 0;
}