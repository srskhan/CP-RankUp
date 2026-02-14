#include <iostream>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <list>
#include <map>
#include<deque>
#include <algorithm>
#include <sstream>
#include <cstring>
#include <limits.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin>>n;
    vector<string> names(n);
    map<string,bool>seen;

    for(int i=0;i<n;i++){
        cin>>names[i];
    }

    for(int i=n-1;i>=0;i--){
        if(seen[names[i]]==false){
            cout<< names[i] <<'\n';
        }
        seen[names[i]] = true;
    }

    return 0;
}