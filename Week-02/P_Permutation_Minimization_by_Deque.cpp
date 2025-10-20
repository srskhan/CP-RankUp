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
        vector<int> arr(n);
        deque<int> dq;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        
        if(dq.empty()){
            dq.push_back(arr[0]);
        }
        for(int i=1;i<n;i++){
            if(arr[i]>dq[0]){
                dq.push_back(arr[i]);
            }
            else{
                dq.push_front(arr[i]);
            }
        }

        for(int i: dq){
            cout<< i <<" ";
        }
        cout<<endl;
    }
    return 0;
}