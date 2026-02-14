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
    
    string st;
    cin>>st;
    map<char,int> mp;

    for(int i=0;i<st.size();i++){
        mp[st[i]]++;
    }
    int odd_cnt=0;
    char k=0;
    int v=0;
    for(auto [key,val]: mp){
        if(val % 2 != 0){
            odd_cnt++;
            k = key;
            v = val;
        }
    }

    if(odd_cnt>1){
        cout<<"NO SOLUTION"<<'\n';
        return 0;
    }

    deque<char>dq;

    if(odd_cnt ==1){
        for(int i=0;i<v;i++){
            dq.push_back(k);
        }
        mp.erase(k);
    }


    for(auto [key,val]:mp){
        for(int i=0;i<val;i++){
            if(i%2 ==0){
                dq.push_back(key);
            }
            else{
                dq.push_front(key);
            }
        }
    }

    for(char c: dq){
        cout<<c;
    }

    return 0;
}