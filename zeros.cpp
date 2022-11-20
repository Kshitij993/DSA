 #include<bits/stdc++.h>
 
using namespace std;
 
void moveZeroes(vector<int>& nums) 
{
        int i,n,p=-1,j;
        n=nums.size();
        for(i=n-1;i>=0;i--)
        {
            if(nums[i]==0)     
            {
                nums.push_back(0);
                p=i;
            }
           if(p!=-1 && nums[i]==0)
            {
            	for(j=p;j<nums.size()-1;j++)
            		nums[j]=nums[j+1];
            }	
        }  
        nums.resize(n);
 }
 
int main()
 {
   vector<int> a;
   int i;
   a.push_back(0);
   a.push_back(1);
   a.push_back(0);
   a.push_back(3);
   a.push_back(12);
    for( i=0;i<a.size();i++)
   	cout<<a[i]<<" ";
   cout<<endl;
   moveZeroes(a);
   for( i=0;i<a.size();i++)
   	cout<<a[i]<<" ";
   cout<<endl;
 }
