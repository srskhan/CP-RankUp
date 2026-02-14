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
    
    int a,b;
    cin>>a>>b;

    if(a>b && (a-b)>=2){
        cout<< a+(a-1)<<'\n';
    }
    else if(b>a && (b-a)>=2){
        cout<< b+(b-1)<<'\n';
    }
    else{
        cout<< a+b <<"\n";
    }
    return 0;
}