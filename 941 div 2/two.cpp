#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin>>t;

    while (t--)
    {
        int a = 0, b=0,c=0,d=0;
       int n,m;
       cin>>n>>m;
       char arr[n][m];

       for(int i = 0 ; i < n; i++){
        for(int j = 0; i < m; j++){
            cin>>arr[i][j];
        }
       }
       for(int i = 0; i<m; i++){
            if(arr[0][i] == 'W' || arr[0][m]=='B'){
                a = 1;
            }    
        }
         for(int i = 0; i<n; i++){
            if(arr[i][m] == 'W' || arr[0][m]=='B'){
                b = 1;
            }    
        }
         for(int i = 0; i<n; i++){
            if(arr[i][0] == 'W' || arr[0][m]=='B'){
                c = 1;
            }    
        }
         for(int i = 0; i<m; i++){
            if(arr[n][i] == 'W' || arr[0][m]=='B'){
                d = 1;
            }    
        }

        if(a+b+c+d == 4)
         cout<<"YES"<<endl;
         else
         cout<<"NO"<<endl;
    }
        
    return 0;
}
