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
    vector<int> vec;
    for(int i=0;i<n-1;i++){
        int x;
        cin>>x;
        vec.push_back(x);
    }
    vector<int> freq(n+1, 0);
    for(int i=0;i<n-1;i++){
        freq[vec[i]]++;
    }
    for(int i=1;i<=n;i++){
        if(freq[i] == 0){
            cout<<i<<endl;
        }
    }
    return 0;
}