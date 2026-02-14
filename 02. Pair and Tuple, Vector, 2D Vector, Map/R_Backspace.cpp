#include <iostream>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <list>
#include <map>
#include<deque>
#include<set>
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

    vector<char> vec;

    for(char c: st){
        if(c == '<'){
            if(!vec.empty()){
                vec.pop_back();
            }
        }
        else{
            vec.push_back(c);
        }
    }

    for(int i=0;i<vec.size();i++){
        cout<< vec[i];
    }
    return 0;
}