#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n=25;

    vector <int> a;
    int i;

    int num=1;

    for(i=0; i<n; i++)
    {
        a.push_back(num++);
    }

    long double total=1;

    for(i=0; i<a.size(); i++)
    {
        total=total*a[i];
    }

    cout<<total;

    return 0;
}