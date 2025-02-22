#include <bits/stdc++.h>
using namespace std;
bool possible(int mid, int l, int r){
    int el = l;
    int d = 1;
   for (int i = 2; i <=mid; i++)
   {
       el = el + d;
       if(el>r){
        return false;
       }
       d++;
   }
   if(el<=r){
    return true;
   }
   return false;  
  
}
int main()
{
    int t; 
    cin>>t;
    while (t--)
    {
        long long l,r;
        cin>>l;
        cin>>r;
     if(l==r){
        cout<<1<<endl;
        continue;
        }

      long long low = 1;
      long long high = (r-l)+1;
      int ans=1;
      
      while (low<=high)
      {
        long long mid = low+(high-low)/2;
        if(possible(mid,l,r)){
            ans = mid;
            low = mid+1;
        }
        else{
            high = mid-1;
        }
      }
      
      cout<<ans<<endl; 
    }
    
    
    return 0;
}
