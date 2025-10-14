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

    int n, x;
    cin >> n >> x;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int operation = 0;
    for (int i = 0; i < x; i++)
    {
        if (find(v.begin(), v.end(), i) == v.end())
        {
            operation++;
        }
    }

    if(find(v.begin(),v.end(),x) != v.end()){
        operation++;
    }
    cout << operation << "\n";
    return 0;
}