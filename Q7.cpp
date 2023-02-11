#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

void mergeVector(vector<int> &v1 , vector<int> &v2)
{
    vector<int> v3(v1.size() + v2.size());
    merge(v1.begin(),v1.end(),v2.begin(),v2.end(),v3.begin());
    for(int i=0;i<v3.size();i++)
    {
        cout<<v3[i]<<" ";
    }
    cout<<endl;
    int s=0;
    int e=v3.size()-1;
    int mid;
    int num;
    for(int i=s;i<e;i++)
    {
         mid = (s+(e-s)/2);
         num=v3[mid]+v3[mid+1];
         num/=2;
    }
        cout<<num;
    
    
}

int main()
{
    int n;
    cin>>n;

    vector<int> v1;
    for(int i=0;i<n;i++)
    {
        int val1; cin>>val1;
        v1.push_back(val1);
    }

    int m;cin>>m;

 vector<int> v2;
    for(int i=0;i<m;i++)
    {
        int val2; cin>>val2;
        v2.push_back(val2);
    }

    if(n==m)
    {

   mergeVector(v1,v2);
    }
    else{
        cout<<"Not work"<<endl;
    }


    return 0;
}