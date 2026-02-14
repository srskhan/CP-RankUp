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
        string st;
        cin>>st;
        int start_idx=-1,end_idx=-1;
        for(int i=0;i<n;i++){
            if(st[i]=='B'){
                start_idx = i;
                break;
            }
        }

        for(int i=n-1;i>=0;i--){
            if(st[i]== 'B'){
                end_idx = i;
                break;
            }
        }
        cout<<end_idx-start_idx+1 <<'\n';
    }
    return 0;
}