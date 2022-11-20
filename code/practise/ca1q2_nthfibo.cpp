#include<iostream>
#include<math.h>

using namespace std;
int fibo(int n){
	int a=0,b=1,c;
	n-=2;
	while(n--){
		c=a+b;
		a=b;
		b=c;
	}
	return c;
}
int main(){
	int n;
	cin>>n;
	cout<<"nth Fibo : "<<fibo(n);
}
