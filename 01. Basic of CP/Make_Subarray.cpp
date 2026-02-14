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

        int cnt=0;
        int first_1 = -1;
        int last_1 = -1;

        for(int i=0;i<n;i++){
            if(st[i] == '1'){
                first_1 = i;
                break;
            }
        }

        for(int i=n-1;i>=0;i--){
            if(st[i] == '1'){
                last_1 = i;
                break;
            }
        }

        for(int i= first_1;i<last_1;i++){
            if(st[i]== '0'){
                cnt++;
            }
        }

        if(first_1 == -1){
            cout<< 0 <<endl;
            continue;
        }

        cout<< cnt<<endl;
    
    }
    return 0;
}