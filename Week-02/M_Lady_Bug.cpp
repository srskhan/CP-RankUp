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
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string a,b;
        cin>>a>>b;
        
        int even_pos_1_of_a=0, odd_pos_1_of_a=0;
        int even_pos_0_of_b=0, odd_pos_0_of_b=0;

        for(int i=0;i<a.size();i++){
            if(i%2 == 0){
                if(a[i] == '1'){
                    even_pos_1_of_a++;
                }
            }
            else{
                if(a[i] == '1'){
                    odd_pos_1_of_a++;
                }
            }


            if(i%2 == 0){
                if(b[i] == '0'){
                    even_pos_0_of_b++;
                }
            }
            else{
                if(b[i] == '0'){
                    odd_pos_0_of_b++;
                }
            }
        }

        if(even_pos_1_of_a<= odd_pos_0_of_b && odd_pos_1_of_a<= even_pos_0_of_b){
            cout<<"YES"<<'\n';
        }
        else{
            cout<<"NO"<<'\n';
        }
    }
    return 0;
}