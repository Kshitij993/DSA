#include<iostream>
#include<vector>
#include<unordered_set>

using namespace std;

vector<int> pairSum(vector<int> arr, int sum){
	unordered_set<int> s;
	vector<int> r;
	for(int i:arr){
		if(s.find(sum-i)!=s.end()){
			r.push_back(i);
			r.push_back(sum-i);
			return r;
		}
	s.insert(i);
	}
	return {};
}
int main(){
	int n,i;
	cout<<"enter n";
	cin>>n;
	vector<int> a(n);
	cout<<"Enter array element ";
	for(i=0;i<n;i++)
		cin>>a[i];
	int sum;
	cout<<"enter sum ";
	cin>>sum;
	vector<int> r=pairSum(a,sum);
	cout<<endl;
	for(int x :r)
		cout<<x<<" ";
}
