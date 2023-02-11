#include<iostream>
#include <vector>
using namespace std;

// int main()
// {
//     pair<int,string> p;
//     p={1,"nilesh"};
//     cout<<p.first<<" " <<p.second<<endl;
//     pair<int,int> array[3];
//     array[0]={1,2};
//     array[1]={4,5};
//     array[2]={6,7};
//     swap(array[1],array[2]);
//     for(int i=0;i<3;i++)
//     {
//         cout<<array[i].first<<" "<<array[i].second<<endl;
//     }
//     return 0;
// }


// vectors of pairs

void vp(vector<pair<int,int>> v)
{
  for(int i=0;i<v.size();i++)
  {
    cout<<v[i].first<<" "<<v[i].second<<endl;
  }  
}
int main()
{
    vector < pair <int,int> > v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
    int x,y;
    cin>>x>>y;
    v.push_back({x,y});
      vp(v);  
    }
    return 0;
}

