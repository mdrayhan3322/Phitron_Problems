#include<bits/stdc++.h>
using namespace std;
int main (){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     
     int a,b;
     cin>>a>>b;
     vector<int>p(a), q(b);
     for(int i = 0 ; i<a ; i++){

        cin>>p[i];
     }
     for(int i=0 ; i<b; i++)
     {
        cin>>q[i];
     }
    int l = 0 ,r=0,count=0;
     while(r<b)
     {
        if(l<a && p[l] <q[r])
        {
            count++;
            l++;
        }
        else 
        {
            cout<<count<<" ";
            r++;
        }
     }
     
    return 0;
}