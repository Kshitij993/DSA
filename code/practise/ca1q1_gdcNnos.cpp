#include<iostream>
#include<vector>
#include<set>

using namespace std;
int gcd(int a,int b){
	int c;
	while(a%b!=0){
		c=a%b;
		a=b;
		b=c;
	}
	return b;
}
int gcd_cal(vector<int> arr){
	int res=arr[0];
	for(int i=1;i<arr.size();i++){
		res=gcd(res,arr[i]);
		if(res==1)
			return res;
	}
	return res;
}

int main(){
	int n,i;
	vector<int> a;
	cin>>n;
	a.resize(n);
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	int x=gcd_cal(a);
 	cout<<"GCD of all elements = "<<x<<endl;
}
