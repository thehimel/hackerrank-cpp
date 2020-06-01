#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector <int> a = {2, 4};
    vector <int> b = {16, 32, 96};

    int min = *max_element(a.begin(), a.end());
    int max = *max_element(b.begin(), b.end());

    /*
    cout<<"min="<<min<<endl;
    cout<<"max="<<max<<endl;
    */

    int i, j ,k;

    vector <int> first;
    vector <int> second;

    int t;

    for(i=min; i<=max; i++)
    {
        t=1;
        for(j=0; j<b.size(); j++)
        {
            if(b[j]%i != 0)
            {
                t=0;
            }
        }

        if(t==1)
        {
            {
                first.push_back(i);
            }
        }
    }

    for(i=0; i<first.size(); i++)
    {
        t=1;
        for(j=0; j<a.size(); j++)
        {
            if(first[i] % a[j] != 0)
            {
                t=0;
            }
        }

        if(t==1)
        {
            {
                second.push_back(first[i]);
            }
        }
    }

    cout<<second.size();
    return 0;

}