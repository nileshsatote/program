#include<iostream>
#include<algorithm>
#include <vector>
using namespace std;


int main()
{

 
int n;
cin>>n;
int a;
    vector<int> v;
    for(int i=0; i<n;i++)
    { 
        cin>>a;
        v.push_back(a);
    }

    cout<<"after add=";
    sort(v.begin() ,v.end());

    for(int i=0; i<n;i++)
    {    
    cout<<v[i]<<" ";
    } cout<<endl;

   cout<<binary_search(v.begin() , v.end() , 68)<<endl;
    // cout<<lower_bound(v.begin() , v.end() , 68)-v.begin()<<endl;
    //  cout<<upper_bound(v.begin() , v.end() , 68)-v.begin()<<endl;
     
    return 0;
}