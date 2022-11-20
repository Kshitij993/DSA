#include<iostream>
#include<math.h>
using namespace std;

int nthPrime(int n){
	int i,c=1,s=2,j;

	while(c!=n){
		j=0;
		s++;
		for(i=2;i<=sqrt(s);i++)
		{
			if(s%i==0)
				j++;
		}
		if(j==0)
			c++;
	}
	return s;
}

int main(){
	int n;
	cin>>n;
	cout<<nthPrime(n)<<endl;

}
