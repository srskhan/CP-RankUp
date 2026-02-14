#include <iostream>
#include <vector>
#include <list>
#include <map>
#include <algorithm>
#include <sstream>
#include <limits.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>> arr[i];
        }
        int maximum = *max_element(arr, arr + n);
        int minimum = *min_element(arr, arr + n);

        int a = maximum + minimum;
        int operation = 0;

        if( a%2 == 0 )
            cout<< operation<<endl;
        else
        {
            while(a%2!=0){
                for(int i=0;i<n-1;i++){
                    arr[i] = arr[i+1];
                }
                n--;
                operation++;
                maximum = *max_element(arr, arr + n);
                minimum = *min_element(arr, arr + n);

                a = maximum + minimum;
            }
            cout<<operation<<endl;
        }
    }
    return 0;
}