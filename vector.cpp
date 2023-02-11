// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {

//    int n;
//    cin>>n;
//    int a;
// vector<int> v;
// // v.push_back(1);
// // v.push_back(2);
// // v.push_back(3);
// // v[1]=10;
// // cout<<v[0]<<v[1]<<v[2]<<endl;

// for (int i=0;i<v.size();i++)
// {
//    cin>>a;
//    v.push_back(a);
// }
// cout<<"after"<<endl;
// for(auto &x:v)
// {
//    cout<<x<<" ";
// }
// cout<<endl;
// }
#include<bits/stdc++.h>
using namespace std;

//main function
void vp(vector<int>  &v)
{
   for(int i=0;i<v.size();i++)
   {
      cout<<v[i]<<" ";
   }
}
int main() {
    int n; 
    cin>>n; // taking size of vector from user
    vector<int> v;
    // we can also mention size here like
    // vector<int> v(n);
   
    for(int i=0 ; i<n ; i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }
    cout<<"after"<<endl;
   //  for(auto &p : v)
   //  {
   //      cout<<p<<" ";
   //  }
   //  cout<<endl;
   vp(v);
   
    return 0;
}