#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter thr number\n";
    cin>>n;
    int origanaln=n;
    int sum=0;
    while(n>0)
    {
        int lastdigit=n%10;
        sum+=pow(lastdigit,3);
        n=n/10;
    }
    if(sum==origanaln)
    {
        cout<<"amstrong number\n";
    }
    else{
        cout<<"not a mastrong number";
    }
    return 0;
}