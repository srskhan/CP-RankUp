#include <iostream>
#include <iomanip>
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
    double sum;
    while(n--)
    {
        double a,b;
        cin>>a>>b;
        sum += a*b;
    }

    cout<<fixed<<setprecision(3)<<sum<<endl;
    return 0;
}