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
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> vec(n);
        for(int i=0;i<n;i++){
            cin>>vec[i];
        }

        if(n<2){
            cout<< "NO"<<'\n';
        }
        else{
            int even=0;
            int odd = 0;

            for(int i=0;i<n;i++){
                if(vec[i] %2 == 0){
                    even++;
                }
                else{
                    odd++;
                }
            }

            if(even>=2 || odd>=2){
                cout<<"YES"<<'\n';
            }
            else{
                cout<<"NO" <<'\n';
            }
        }
    }
    return 0;
}