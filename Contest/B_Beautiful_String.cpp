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
        int i=0, j = st.size()-1;
        bool palin = true;

        while(i<j)
        {
            if(st[i] != st[j]){
                palin = false;
                break;
            }
            i++;
            j--;
        }

        vector<int> idx;
        int cnt = 0;

        if(palin){
            cout<< cnt <<'\n';
            cout<<'\n';
        }
        else{
            for(int i=0;i<st.size();i++){
                if(st[i]=='0'){
                    cnt++;
                    idx.push_back(i+1);
                }
            }
            cout<< cnt<<'\n';

            for(int i : idx){
                cout<<i <<" ";
            }
            cout<<'\n';
        }

    }
    return 0;
}