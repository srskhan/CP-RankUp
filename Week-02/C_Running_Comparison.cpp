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
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> vec1(n);
        vector<int>vec2(n);
        int one_unhappy = 0;
        for(int i=0;i<n;i++){
            cin>>vec1[i];
        }
        for(int i=0;i<n;i++){
            cin>>vec2[i];
        }

        for(int i=0;i<n;i++){
            if(vec1[i]> 2* vec2[i] || vec2[i] > 2 * vec1[i]){
                one_unhappy++;
            }
        }

        cout<< n-one_unhappy <<endl;
    }
    return 0;
}