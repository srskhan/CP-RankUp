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

        sort(arr.rbegin(),arr.rend());

        for(int i=0;i<k;i++){
            arr[i] = 0;
            x+= 100;
        }

        int rank = 0;
        for(int i=0;i<n;i++){
            if(arr[i]>x){
                rank++;
            }
        }
        cout<< rank+1<<endl;

    }
    return 0;
}