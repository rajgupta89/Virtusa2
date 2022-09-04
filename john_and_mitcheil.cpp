#include <bits/stdc++.h>
using namespace std;
int fact(int n)
{
if(n==0||n==1)
return 1;
else
return n*fact(n-1);
}
int acb(int a,int b)
{
int result;
result=fact(a)/(fact(b)*fact(a-b));     //send python code to om
return result;
}
int main()
{
int a,b,m;
cin>>a>>b>>m;
int result1=acb(a,b);
int result2=result1%m;
cout<<result2<<endl;
return 0;
}