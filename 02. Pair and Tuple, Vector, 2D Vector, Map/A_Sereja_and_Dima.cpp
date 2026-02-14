#include <iostream>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <list>
#include<deque>
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
    
    int n;
    cin>>n;
    deque<int> dq(n);
    for(int i=0;i<n;i++){
        cin>>dq[i];
    }
    int seraja_sum=0,dima_sum = 0,mx;
    int who = 1;
    
    while(!dq.empty())
    {
        int left = dq.front();
        int right = dq.back();
        mx = max(left,right);

        if(who % 2 !=0){
            seraja_sum += mx;
        }
        else{
            dima_sum += mx;
        }

        if(mx == left){
            dq.pop_front();
        }
        else{
            dq.pop_back();
        }
        who++;
    }

    cout<< seraja_sum << " " <<dima_sum <<endl;
    
    return 0;
}