//problem link:https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/I
#include <iostream>
using namespace std;

int main() {

int num,rev=0,temp;
cin>>num;
temp=num;

while(num){
   rev=rev*10+num%10;
   num=num/10;
}
   if(temp==rev)
   cout<<rev<<endl<<"YES";
   else cout<<rev<<endl<<"NO";

}
