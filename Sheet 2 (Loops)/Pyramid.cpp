//problem link:https://codeforces.com/group/MWSDmqGsZm/contest/219432/my
#include <iostream>
using namespace std;

int main()
{
   int n;
   
   cin>>n;
   for(int i=0;i<n;i++){
       for(int j=0;j<=i;j++){
            cout<<"*";
       }
    cout<<endl;
   }
   return 0;
}
