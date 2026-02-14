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

    cout<< st[0];

    for(int i=0;i<st.size();i++){
        if(st[i] == '-'){
            cout<< st[i+1];
        }
    }
    return 0;
}