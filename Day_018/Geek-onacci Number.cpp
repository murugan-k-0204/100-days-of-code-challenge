#include<iostream>
using namespace std;
int main()
 {
     int t;
     cin>>t;
     for (int i = 0; i < t; i++)
     {
         int a,b,c,d;
         cin>>a>>b>>c>>d;                        
         int temp;
         for (int i = 4; i < d+1; i++)
         {
             temp=a+b+c;
             a=b;
             b=c;
             c=temp;
         }
         cout<<c<<"\n";
         
     }
     
    return 0;
}
 
