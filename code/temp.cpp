// { Driver Code Starts


#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution{
	public:
// 	int isPrime(int n){
// 	    int c=0;
// 	    for(int i=2;i<=sqrt(n);i++){
// 	        if(n%i==0)
// 	            c++;
// 	    }
// 	    if(c==0)
// 	        return 1;
// 	   else
// 	        return 0;
// 	}
	vector<int>AllPrimeFactors(int N) {
	    // Code here
	   
	    set<int> s;
	    if(N==2)
	        return {2};
	    for(int i=2;i<=N;i++){
	        while(N%i==0){
	            s.insert(i);
	            N/=i;
	        }
	    }
	    vector<int> a(s.size());
	    int x=0;
	    for(int i:s)
	        a[x++]=i;
	    return a;
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		long long int N;
		cin >> N;
		Solution ob;
		vector<int>ans = ob.AllPrimeFactors(N);
		for(auto i: ans)
			cout << i <<" ";
		cout <<"\n";
	}  
	return 0;
}  // } Driver Code Ends