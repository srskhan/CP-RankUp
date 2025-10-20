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
        vector<pair<int,char>> cap;
        vector<pair<int,char>>smll;
        string st;
        cin>>st;

        for(int i=0;i<st.size();i++){
            if(st[i]>='A' && st[i]<='Z' && st[i] != 'B'){
                cap.push_back({i,st[i]});
            }
            if(st[i]>='a' && st[i]<='z' && st[i] != 'b'){
                smll.push_back({i,st[i]});
            }
            if(st[i] == 'B'){
                if(cap.size()>0){
                    cap.pop_back();
                }
            }
            if(st[i] == 'b'){
                if(smll.size()>0){
                    smll.pop_back();
                }
            }
        }

        vector<pair<int,char>>ans;
        for(auto p: cap){
            ans.push_back(p);
        }

        for(auto p: smll){
            ans.push_back(p);
        }

        sort(ans.begin(),ans.end());

        for(auto [idx,ch]: ans){
            cout<<ch;
        }
        cout<<'\n';


    }
    return 0;
}