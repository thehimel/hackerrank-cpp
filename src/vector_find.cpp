
//Syntax: *max_element (first_index, last_index);

// C++ program to find the max of Array using *max_element() in STL 
  
#include <bits/stdc++.h> 
using namespace std; 
  
int main() 
{ 
    // Get the vector 
    vector<int> a = { 1, 45, 54, 71, 76, 12 }; 
  
    // Print the vector 
    cout << "Vector: "; 
    for (int i = 0; i < a.size(); i++) 
        cout << a[i] << " "; 
    cout << endl; 
    
    int key;
    cout<<"Enter the key to find:";
    cin>>key;

    bool found;

    if(find(a.begin(), a.end(), key) != a.end())
    {
        found = true;
    }
    else
    {
        found = false;
    }
    

    if (found) {
        cout<<"found\n";
    } else {
        cout<<"not found\n";
    }
    
    
    
    return 0;
} 