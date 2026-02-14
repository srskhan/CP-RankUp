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
        int n,x,k;
        cin>>n>>x>>k;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        if(k==0){
            int cnt=0;
            for(int i=0;i<n;i++){
                if(arr[i]>x){
                    cnt++;
                }
            }
            cout<<cnt+1<<endl;
        }
        else{
            while(k--){
                int mx = INT_MIN;
                int idx = -1;
                for(int i=0;i<n;i++){
                    if(arr[i]>mx){
                        mx = arr[i];
                        idx = i;
                    }
                }
                arr[idx]=0;
                x += 100;
            }
            int cnt=0;
            for(int i=0;i<n;i++){
                if(arr[i]>x){
                    cnt++;
                }
            }
            cout<<cnt+1<<endl;
        }

    }
    return 0;
}