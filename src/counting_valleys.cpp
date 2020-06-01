
/*

For each U sea_level++, and for each D sea_level--;

Condition for start_valley: sea_level=0 and s[i] = D;
Condition for end_valley: sea_level=-1 and s[i] = U;

*/


#include <bits/stdc++.h>
using namespace std;



int main()
{
    int n;

    n=8;
    string s="UDDDUDUU";

    int sea_level=0;

    int valley_start=0;
    int valley_end=0;
    
    int valley_count=0;

    int i;

    for(i=0; i<n; i++)
    {
        if(sea_level==0 && s[i] == 'D')
        {
            valley_start=1;
        }

        if(sea_level==-1 && s[i] == 'U')
        {
            valley_end=1;
            if(valley_start==1 && valley_end==1)
            {
                valley_count++;
                valley_start=valley_end=0;
            }
        }


        if(s[i]=='U')
        {
            sea_level++;
        }

        if(s[i]=='D')
        {
            sea_level--;
        }
    }

    cout<<valley_count;


    return 0;
}