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
        int n;
        cin>>n;
        vector<int> vec(n);
        for(int i=0;i<n;i++){
            cin>>vec[i];
        }
        int mx = *max_element(vec.begin(),vec.end());
        int ans=-1;
        for(int i=mx;i>=1;i--){
            bool gcnd = false;
            for(int num: vec){
                if(num%i ==0){
                    gcnd = true;
                }
            }
            if(!gcnd){
                ans = i;
                break;
            }
        }

        cout<< ans <<endl;
    }
    return 0;
}