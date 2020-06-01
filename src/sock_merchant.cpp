#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> ar ={10, 20, 20, 10, 10, 30, 50, 10, 20};

    //vector <int> ar = {1, 1, 3, 1, 2, 1, 3, 3, 3, 3};

    int i,j;
    int pair_success=0;
    int num_of_socks = 0;
    int pair_count=0;
    int found;
    int pos=0;

    vector<int> distinct;

    //make a new vector with distict types
    //find() function works if number of elements in the vector > 2

    for(i=0; i<ar.size(); i++)
    {
        found=0;
        if(pos==0)  //enter the first element
        {
            distinct.push_back(ar[i]);
            pos=1;
        }
        if(pos==1)  //enter the second element if it is not identical to the first element of the vector
        {
            if(ar[i]!=distinct[0])
            {
                distinct.push_back(ar[i]);
                pos=2;
            }
        }

        if(pos>1)   //enter normally on this condition
        {
            if(find(distinct.begin(), distinct.end(), ar[i]) != distinct.end())
            {
                found=1;
            }
            if(found==0)
            {
                distinct.push_back(ar[i]);
            }
        }
    }

    //print the vector elements
    for(i=0; i<distinct.size(); i++)
    {
        cout<<distinct[i]<<" ";
    }

    cout<<endl;

    //for every distinct element num_of_socks is initialized to 0
    for(i=0; i<distinct.size(); i++)
    {
        num_of_socks=0;
        for(j=0; j<ar.size(); j++)
        {
            if(distinct[i]==ar[j])  //if identical element is found
            {
                num_of_socks++; //increase the num_of_socks
                if(num_of_socks==2) //when it becomes 2, increment the pair_count and reinitialize the num_of_socks to 0 to be ready to start the counting for the next pair
                {
                    pair_count++;
                    num_of_socks=0;
                }
            }
        }
    }

    cout<<pair_count;

}