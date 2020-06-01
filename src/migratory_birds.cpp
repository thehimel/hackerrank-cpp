#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> arr = {1, 2, 3, 4, 5, 4, 3, 2, 1, 3, 4};
    int i, j, k;
    int found = 0;
    vector <int> type;
    vector <int> type_count;

    int pos=0;

    //first of all, we will create a vector "type" with distict types
    //for that we need to enter a value of the value doesn't exist in the "type" vector with find() fuction
    //important note: find() will work only if the vector.size()>2

    for(i=0; i<arr.size(); i++)
    {
        if(pos==0)  //we enter the first element directly when position is 0. after the insertion we increment the value of pos. after the first insertion, pos=1;
        {
            type.push_back(arr[i]);
            pos=1;
        }
        if(pos==1 && type[i]!=type[0])  //we enter the second element if the present elemenet is not equal to the first element in the vector. after the 2nd insertion, pos=2
        {
            type.push_back(arr[i]);
            pos=2;
        }

        if(pos>1)   //if pos is more than 1 that means there exist at least 2 elements in the vector. now we can compare the elements with find() function.
        {
            if(find(type.begin(), type.end(), arr[i])!=type.end())
            {
                found = 1;
            }
            if(found==0)
            {
                type.push_back(arr[i]);
            }
            found=0;
        }

    }
    
    //now we create another vector "type_count" to keep the counter of each distict type. thus type_count.size()=type.size()
    //we initialize each counter to 0
    for(i=0; i<type.size(); i++)
    {
        type_count.push_back(0);
    }


    //for each distict type check how many occurence exits. increment the corresponding type_count according to the occurences of distinct types
    for(i=0; i<type.size(); i++)
    {
        for(j=0; j<arr.size(); j++)
        {
            if(type[i]==arr[j])
            {
                type_count[i]++;
            }
        }
    }

    //print the distict types
    for(i=0; i<type.size(); i++)
    {
        cout<<type[i]<<" ";
    }

    cout<<endl;

    //print the counters of the distict types
    for(i=0; i<type_count.size(); i++)
    {
        cout<<type_count[i]<<" ";
    }

    cout<<endl;

    //find the max element in the type_count
    int max=*max_element(type_count.begin(), type_count.end());

    cout<<max<<endl;

    //create another vector only with the types having max number of occurences
    vector <int> max_types;

    //insert the types hacing max occurences to max_types
    for(i=0; i<type_count.size(); i++)
    {
        if(type_count[i]==max)
        {
            max_types.push_back(type[i]);
        }
    }

    //print the max_types
    for(i=0; i<max_types.size(); i++)
    {
        cout<<max_types[i]<<" ";
    }

    cout<<endl;

    //initially consider the first element of the max_types as the minimum value
    int min=max_types[0];

    //if max_types has more than one element find the minimum element
    if(max_types.size()>1)
    {
        for(i=1; i<max_types.size(); i++)
        {
            if(max_types[i]<min)
            {
                min=max_types[i];
            }
        }
    }

    //print the minimum element
    cout<<min;

    return 0;
}