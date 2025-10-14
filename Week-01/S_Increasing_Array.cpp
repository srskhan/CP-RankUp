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
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    long long int move = 0;

    for(int i=1;i<n;i++){
        if(arr[i]<arr[i-1]){
            int dif = arr[i-1] - arr[i];
            arr[i] += dif;
            move += dif;
        }
    }
    cout<<move<<endl;
    return 0;
}