#include<iostream>
#include<vector>
using namespace std;


void sort(vector <int> &v)
{
   int zero=0;
   int i=0;
   for(int i=0;i<v.size();i++)
   {
      if(v[i]==0){
         zero++;
      }
   }
    cout<<"zero is="<<zero<<endl;
    int one=0;

     for(int i=0;i<v.size();i++)
   {
      if(v[i]==1)
      {
         one++;
      }
   }

 cout<<"one is ="<<one<<endl;
    for(int i=0;i<v.size();i++)
    {
       if(i<zero)
       {
         v[i]=0;
       }

       else{
         v[i]=1;
       }
    }

    
}

int main()
{
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int ele;cin>>ele;
        v.push_back(ele);
    }
     sort(v);

     for(int i=0;i<n;i++)
     {
        cout<<v[i]<<" ";

     }
     cout<<endl;

    return 0;
}