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
    while(t--){
        int n;
        cin>>n;

        vector<int> vec(n);
        for(int i=0;i<n;i++){
            cin>>vec[i];
        }

        cout<< *max_element(vec.begin(),vec.end())<<'\n';
    }
    return 0;
}