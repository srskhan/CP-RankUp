#include <iostream>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <list>
#include <map>
#include<deque>
#include<set>
#include<unordered_set>
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
        unordered_set<int> seen;
        int n;
        cin>>n;
        vector<int> vec(n);
        for(int i=0;i<n;i++){
            cin>>vec[i];
        }
        int cnt=0;
        for(int i=n-1;i>=0;i--){
            if(seen.count(vec[i])){
                break;
            }
            seen.insert(vec[i]);
            cnt++;
        }

        int pref = n- cnt;
        cout<< pref<<'\n';
    }
    return 0;
}