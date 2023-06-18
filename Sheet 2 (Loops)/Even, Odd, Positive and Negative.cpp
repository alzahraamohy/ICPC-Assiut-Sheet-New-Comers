//Problem Link : https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/C
#include <iostream>
using namespace std;
 
int main()
{
   int x,y,even=0,odd=0,pos=0,neg=0;
   cin>> x;
    for(int i=1;i<=x;i++){
        cin>>y;
        if(y%2==0) {
            even++;}
             else{ odd++;}
       if(y>0){
            pos++;}
        else if(y<0){
            neg++;}
       
    }
cout<<"Even: "<<even<<endl;
cout<<"Odd: "<<odd<<endl;
cout<<"Positive: "<<pos<<endl;
cout<<"Negative: "<<neg<<endl;
    return 0;
}
