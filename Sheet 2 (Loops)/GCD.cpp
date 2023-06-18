//problem link : https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/L
#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    int num1,num2,largest,x;
    cin>>num1>>num2;
    x=min(num1,num2);
    
    for(int i=1;i<= x;i++){
        if(num1%i==0 && num2%i==0)
            largest = i;
    }
    cout<<largest;
    return 0;
}
