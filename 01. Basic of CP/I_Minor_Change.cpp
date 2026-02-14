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
    
    string st1,st2;
    cin>>st1>>st2;
    int operation=0;
    for(int i=0;i< st1.size();i++){
        if(st1[i]!= st2[i])
            operation++;
    }
    cout<<operation<<"\n";
    return 0;
}