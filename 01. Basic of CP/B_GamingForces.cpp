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
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        vector<int> one_count;
        int count=0;
        for(int i=0;i<n;i++){
            if(arr[i]==1){
                one_count.push_back(arr[i]);
            }
            else{
                count++;
            }
        }
        cout<< count + ceil(one_count.size()/2.0) << '\n';

    }
    return 0;
}