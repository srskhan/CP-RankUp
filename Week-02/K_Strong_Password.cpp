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
        string st;
        cin>>st;

        int i;
        for(i=1;i<st.size();i++){
            if(st[i] == st[i-1]){
                // idx = i;
                break;
            }
        }

        if(st[i-1] == 'a'){
            st.insert(st.begin()+i, 'b');
        }
        else{
            st.insert(st.begin()+i,'a');
        }
        cout<< st <<endl;
    }
    return 0;
}