#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n=3;
    int total_liked=0;;
    int liked;
    int shared=5;
    int i;

    for(i=0; i<n; i++)
    {
        liked=shared/2;
        shared=liked*3;
        total_liked+=liked;
    }

    cout<<total_liked;

    return 0;
}