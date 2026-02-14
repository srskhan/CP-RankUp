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
    
    int n;
    cin>>n;
    vector<string> vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }

    for(int i=0;i<n;i+=2){
        cout<<vec[i]<<'\n';
    }
    return 0;
}