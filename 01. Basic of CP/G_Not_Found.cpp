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

    vector<int> freq(26,0);

    for(int c: st){
        freq[c-'a']++;
    }

    for(int i=0;i<26;i++){
        if(freq[i] == 0){
            cout<< char(i + 'a');
            return 0;
        }
    }

    cout<< "None";
    
    return 0;
}