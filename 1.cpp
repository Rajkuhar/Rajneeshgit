#include <bits/stdc++.h>
using namespace std;
// bool compare()
int main() {
    int tes;
    cin>>tes;
    while(tes--)
    {
       long long n;
       cin>>n;
       long long arr[n];
       long long jwab;
       for(long long i=0;i<n;i++)
       {
           cin>>arr[i];
       }
       map<long long ,long long>ff;
       for(long long i:arr)
       {
            ff[i]++;
       }
       jwab=n*(n-1);
      for(auto j:ff)
      {
          if(j.second>1)
          {
              jwab-=(j.second*(j.second-1));
          }
      }
      cout<<answer<<endl;
    }
    return 0;
}