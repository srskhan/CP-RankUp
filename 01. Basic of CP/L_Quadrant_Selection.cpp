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
    
    int x,y;
    cin>>x>>y;

    if(x>0 && y>0)
        cout<<1<<endl;
    if(x<0 && y>0)
        cout<<2<<endl;
    if(x<0 && y<0)
        cout<< 3 <<endl;
    if(x>0 && y<0)
        cout<< 4 <<endl;
    return 0;
}