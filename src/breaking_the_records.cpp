#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> scores = {3, 4, 21, 36, 10, 28, 35, 5, 24, 42};

    int i;
    int min, max;

    min=scores[0];
    max=scores[0];
    
    int min_break=0;
    int max_break=0;

    for(i=1; i<scores.size(); i++)
    {
        if(scores[i]>max)
        {
            max=scores[i];
            max_break++;
        }

        if(scores[i]<min)
        {
            min=scores[i];
            min_break++;
        }
    }

    vector <int> record;

    record.push_back(max_break);
    record.push_back(min_break);

    cout<<record[0]<<" "<<record[1];

}