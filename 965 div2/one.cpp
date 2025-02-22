#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int xc,yc,k;
    while (t--)
    {
     cin>>xc>>yc>>k;
     int t =xc;
       if(k%2==1)
         cout<<xc<<" "<<yc<<endl;

       for(int i=0;i<k/2;i++){
          
            cout<<++xc<<" "<<yc<<endl;
       }  
         xc=t;
        for(int i=0;i<k/2;i++){

            cout<<--xc<<" "<<yc<<endl;
       }  
    }
    
    return 0;
}
