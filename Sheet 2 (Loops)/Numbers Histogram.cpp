//problem link:https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/N
#include <iostream>
using namespace std;
void sybmol(int x, char ch){
    for(int i=0;i<x;i++)
      cout<<ch;
}

int main()
{
   char s;
   int n;
   
   cin>>s>>n;
   int nums[n];

   for(int i=0;i<n;i++){
        cin>>nums[i];
        sybmol(nums[i],s);
        cout<<endl;
   }
   return 0;
}
