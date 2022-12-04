#include<bits/stdc++.h>
#include<vector>
using namespace std;

int setBit(int n)
{
 int i=0,t=0,j,c=0;
 int a[30];
 while(n!=0)
  {
   t=n%2;
   a[i]=t;
   n=n/2;
   i++;
  }
 sort(a,a+i,greater<int>());
 for(j=0;j<i;j++)
  {
   if(a[j]==1)
    c++;
  }
  return c;
}
int main()
{
 int b;
 cin>>b;
 int s=setBit(b);
 cout<<s;
}
