#include <iostream>
#include<cstdlib>
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
    
    int a,b,c;
    cin>>a>>b>>c;
    
    if(abs(a-b)<= c)
        cout<< "Yes\n";
    else
        cout<<"No\n";
    return 0;
}