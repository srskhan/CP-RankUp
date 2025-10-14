#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <sstream>
#include <limits.h>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int first_ele = a-1;
        int second_ele = abs(b-c) + c-1;
        if(first_ele < second_ele){
            cout<<"1"<<endl;
        }
        else if(first_ele > second_ele){
            cout<<"2"<<endl;
        }
        else
        {
            cout<<"3"<<endl;
        }
    }
    return 0;
}