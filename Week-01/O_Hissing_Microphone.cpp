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
    
    string st;
    cin>>st;

    bool flag = false;
    for(int i=0;i<st.size();i++){
        if(st[i] == 's' && st[i+1] == 's'){
            flag = true;
        }
    }

    if(flag)
        cout<<"hiss"<<endl;
    else
        cout<<"no hiss"<<endl;
    return 0;
}