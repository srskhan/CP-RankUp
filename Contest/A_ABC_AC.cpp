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

    int middle = (st.size())/2;
    cout<< st.erase(middle,1)<<endl;
    // cout<<middle;
    return 0;
}