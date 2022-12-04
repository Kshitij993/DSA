#include<bits/stdc++.h>
#include<vector>
#include<math.h>
using namespace std;

int swapNibble(int n)
{
 int i=0,j,t,a[30],b[8],d,k;
 while(n!=0)
  {
   t=n%2;
   a[i]=t;
   n=n/2;
   i++;
  }
  int s=0,e=i-1;
  while(s<e)
   {
    t=a[s];
    a[s]=a[e];
    a[e]=t;
    s++;
    e--;
   }
  if(i<8)
   {
     j=i;
     d=8-i;
     for(i=0;i<d;i++)
     b[i]=0;
     i=0;
     for(k=d;k<8;k++)
     {
      b[k]=a[i];
      i++;
     }
   }
  else
   {
    for(j=0;j<8;j++)
     b[j]=a[j];
   } 
  for(j=0;j<4;j++)
   {
    t=b[j];
    b[j]=b[4+j];
    b[4+j]=t;
   }
  int sum=0;
  i=7;
  for(j=0;j<8;j++)
    {
    sum=sum+b[j]*pow(2,i);
    i--;
    }
   
   return sum;
}
int main()
{
 int b;
 cin>>b;
 int s=swapNibble(b);
 cout<<s;
}
