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
        int l,r,d,u;
        cin>>l>>r>>d>>u;

        if(l==r && l == d && l == u){
            cout<< "Yes\n";
        }
        else
            cout<<"No\n";
    
    }
    
    return 0;
}