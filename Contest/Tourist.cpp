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

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,a,b;
	    cin>>n>>a>>b;
        
        int min_x = 105;
        int min_y = 105;
	    
	    while(n--)
	    {
	        int x,y;
	        cin>>x>>y;
	        
	        
	        if(abs(x-a) + abs(y-b) < min_x+min_y){
	            min_x = abs(x-a);
	            min_y = abs(y-b);
	        }
	    }
        cout<< min_x + min_y<<"\n";
	}

}